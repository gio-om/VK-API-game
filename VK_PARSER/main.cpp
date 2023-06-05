#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/beast.hpp>
#include <boost/beast/ssl.hpp>
#include <boost/url/src.hpp>
#include <boost/bind/bind.hpp>

using json = nlohmann::json;
using boost::asio::ip::tcp;
namespace ssl      = boost::asio::ssl;
namespace beast    = boost::beast;
namespace http     = beast::http;
using ssl_socket   = ssl::stream<tcp::socket>;


const std::string access_file_name = "access_key.txt";
std::string ACCESS_TOKEN;
const std::string HOST = "api.vk.com";
const std::string API_METHOD = "/method/users.search?";

class Client {
private:
    tcp::resolver resolver_;
    ssl_socket socket_;
    boost::asio::streambuf request_;
    boost::asio::streambuf response_;

public:
    std::string resp;

    Client(boost::asio::io_context& io_context, ssl::context& ctx, boost::urls::url const &url)
    : socket_(io_context, ctx), resolver_(io_context) {
        const std::string host = url.host();
        const std::string path = url.path();
        const std::string scheme = url.scheme();
        const std::string queryString = url.query();

        std::cout << "host: " << host << std::endl;
        std::cout << "path: " << path << std::endl;
        std::cout << "scheme: " << scheme << std::endl;
        std::cout << "queryString: " << queryString << std::endl;


        std::ostream request_stream(&request_);
        request_stream << "GET " << path << "?" << queryString << " HTTP/1.0\r\n";
        request_stream << "Host: " << host << "\r\n";
        request_stream << "Accept: */*\r\n";
        request_stream << "Connection: close\r\n\r\n";

        std::cout << "client: resolving " << host << " (scheme " << scheme << ") ...\n";

        tcp::resolver::query query(host, "https");
        resolver_.async_resolve(query,
                                boost::bind(&Client::handle_resolve, this,
                                            boost::asio::placeholders::error,
                                            boost::asio::placeholders::iterator));
    }

    ~Client() {
        socket_.shutdown();
    }


private:

    void handle_resolve(const boost::system::error_code& error,
                        tcp::resolver::iterator endpoint_iterator) {
        if (!error) {
            std::cout << "Resolve OK" << "\n";
            socket_.set_verify_mode(ssl::verify_peer);
            socket_.set_verify_callback(
                    boost::bind(&Client::verify_certificate, this, std::placeholders::_1, std::placeholders::_2));

            boost::asio::async_connect(socket_.lowest_layer(), endpoint_iterator,
                                       boost::bind(&Client::handle_connect, this,
                                                   boost::asio::placeholders::error));
        }
        else {
            std::cout << "Error resolve: " << error.message() << std::endl;
        }
    }

    bool verify_certificate(bool preverified,
                            boost::asio::ssl::verify_context& ctx) {
        std::cout << "verify_certificate (preverified " << preverified << " ) ..." << std::endl;

        char subject_name[256];
        X509* cert = X509_STORE_CTX_get_current_cert(ctx.native_handle());
        X509_NAME_oneline(X509_get_subject_name(cert), subject_name, 256);
        std::cout << "Verifying " << subject_name << std::endl;
        return true;
    }

    void handle_connect(const boost::system::error_code& error) {
        std::cout << "handle_connect" << std::endl;
        if (!error) {
            std::cout << "Connect OK " << std::endl;
            socket_.async_handshake(boost::asio::ssl::stream_base::client,
                                    boost::bind(&Client::handle_handshake, this,
                                                boost::asio::placeholders::error));
        }
        else {
            std::cout << "Connect failed: " << error.message() << std::endl;
        }
    }

    void handle_handshake(const boost::system::error_code& error) {
        std::cout << "handle_hanshake start" << std::endl;
        if (!error) {
            std::cout << "Hanshake OK" << std::endl;
            std::cout << "Request: " << std::endl;
            const char* header = boost::asio::buffer_cast<const char*>(request_.data());
            std::cout << header << std::endl;

            boost::asio::async_write(socket_, request_,
                                     boost::bind(&Client::handle_write, this,
                                                 boost::asio::placeholders::error));
        }
        else {
            std::cout << "Handshake failed: " << error.message() << std::endl;
        }
    }

    void handle_write(const boost::system::error_code& error) {
        std::cout << "handle_write start" << std::endl;
        if (!error) {
            boost::asio::async_read_until(socket_, response_, "\r\n",
                                    boost::bind(&Client::handle_read_status_line, this,
                                                boost::asio::placeholders::error));
        }
        else {
            std::cout << "Write failed: " << error.message() << std::endl;
        }
    }

    void handle_read_status_line(const boost::system::error_code& error) {
        std::cout << "handle_read_status_line start \n";
        if (!error) {
            std::istream response_stream(&response_);
            std::string http_version;
            response_stream >> http_version;
            unsigned int status_code;
            response_stream >> status_code;
            std::string status_message;
            std::getline(response_stream, status_message);
            if (!response_stream || http_version.substr(0, 5) != "HTTP/")
            {
                std::cout << "Invalid response\n";
                return;
            }
            if (status_code != 200)
            {
                std::cout << "Response returned with status code ";
                std::cout << status_code << "\n";
                return;
            }
            std::cout << "Status code: " << status_code << "\n";

            boost::asio::async_read_until(socket_, response_, "\r\n\r\n",
                                          boost::bind(&Client::handle_read_headers, this,
                                                      boost::asio::placeholders::error));
        }
        else {
            std::cout << "Error: " << error.message() << "\n";
        }
    }

    void handle_read_headers(const boost::system::error_code& error) {
        std::cout << "handle_read_headers\n";
        if (!error) {
            std::istream response_stream(&response_);
            std::string header;
            while (std::getline(response_stream, header) && header != "\r")
                std::cout << header << "\n";
            std::cout << "\n";

/*            if (response_.size() > 0)
                std::cout << &response_;*/

            boost::asio::async_read(socket_, response_,
                                    boost::asio::transfer_at_least(1),
                                    boost::bind(&Client::handle_read_content, this,
                                                boost::asio::placeholders::error));
        }
        else {
            std::cout << "Error: " << error.message() << "\n";
        }
    }

    void handle_read_content(const boost::system::error_code& error) {
        //std::cout << "handle_read_content\n";
        if (!error) {
            //std::cout << &response_;
            boost::asio::async_read(socket_, response_,
                                    boost::asio::transfer_at_least(1),
                                    boost::bind(&Client::handle_read_content, this,
                                                boost::asio::placeholders::error));
        }
        else if (error != boost::asio::error::eof) {
            std::cout << "Error: " << error.message() << "\n";
        }
    }

public:
    std::string getResponse() {
        auto bufs = response_.data();
        std::string result(boost::asio::buffers_begin(bufs), boost::asio::buffers_begin(bufs) + response_.size());
        return result;
    }
};

bool read_access_key(const std::string& file_name) {
    std::ifstream fin(file_name);
    if (!fin) {
        std::cout << "File access_key.txt is not opened" << std::endl;
        return false;
    } else {
        getline(fin, ACCESS_TOKEN);
        std::cout << "Access key OK" << std::endl;
        fin.close();
        return true;
    }
}

void createURL(boost::urls::url& url, const std::string& host, const std::string& api_method,
               const std::vector<std::string>& fields, const int count = 1, bool has_photo = true, int sex = 0) {
    std::string URL = "https://" + host + api_method +
                            "count=" + std::to_string(count) +
                            "&sex=" + std::to_string(sex) +
                            "&has_photo=" + std::to_string(has_photo) +
                            "&offset=10" +
                            "&fields=";
    for (int i = 0; i < fields.size(); ++i) {
        URL += fields[i];
        if (i != fields.size() - 1) {
            URL += ",";
        }
    }
    URL += "&access_token=" + ACCESS_TOKEN + "&v=5.131";
    std::cout << URL << std::endl;
    url = boost::urls::url(URL);
}

std::string getFieldFromJson(const std::string& jsonString, const std::string& field, int num_item=0) {
    json js = json::parse(jsonString);
    return to_string(js["response"]["items"][num_item][field]);
}



int main() {
    boost::asio::io_context io_context;

    boost::urls::url url;
    read_access_key(access_file_name);
    int count = 10;
    std::vector<std::string> fields = {"photo_200", "followers_count"};
    createURL(url, HOST, API_METHOD, fields, count);
    ssl::context ctx(ssl::context::sslv23_client);
    ctx.set_default_verify_paths();

    Client client(io_context, ctx, url);
    io_context.run();
    std::string resp = client.getResponse();

    json parsed = json::array();
    for (int i = 0; i < count; ++i) {
        if (getFieldFromJson(resp, "followers_count", i) != "null") {
            parsed.push_back({getFieldFromJson(resp, fields[0], i),
                              getFieldFromJson(resp, "followers_count", i)});
        }
    }

    for (auto el : parsed) {
        std::cout << el << std::endl;
    }

/*    std::ofstream fout("data.txt");
    if (!fout) {
        std::cout << "error";
    }
    fout << parsed;
    fout.close();*/
    return 0;
}
