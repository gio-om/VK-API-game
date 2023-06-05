#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <iostream>
#include <QWidget>
#include <nlohmann/json.hpp>
#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/beast.hpp>
#include <boost/beast/ssl.hpp>
#include <boost/url.hpp>
#include <boost/bind/bind.hpp>

using json = nlohmann::json;
using boost::asio::ip::tcp;
namespace ssl      = boost::asio::ssl;
namespace beast    = boost::beast;
namespace http     = beast::http;
using ssl_socket   = ssl::stream<tcp::socket>;


QT_BEGIN_NAMESPACE
namespace Ui {
class gamewindow;
}
QT_END_NAMESPACE

// Client sends request on vk.api and reads the response with getResponse functrion
// Before sending request make sure, that you reseted io_context!
class Client {
private:
    tcp::resolver resolver_;
    ssl_socket socket_;
    boost::asio::streambuf request_;
    boost::asio::streambuf response_;

public:
    Client(boost::asio::io_context& io_context, ssl::context& ctx)
        : socket_(io_context, ctx), resolver_(io_context) {

    }

    void SendRequest(std::string URL) {
        /*
         * Sends request
         */
        boost::urls::url url(URL);
        const std::string host = url.host();
        const std::string path = url.path();
        const std::string scheme = url.scheme();
        const std::string queryString = url.query();


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
        boost::system::error_code ec;
        socket_.shutdown(ec);
        socket_.lowest_layer().shutdown(tcp::socket::shutdown_both, ec);
        socket_.lowest_layer().cancel(ec);
        socket_.lowest_layer().close();
    }


private:

    void handle_resolve(const boost::system::error_code& error,
                        tcp::resolver::iterator endpoint_iterator) {
        /*
         * Resolve link into IP
         */
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
        /*
         * Verifying certificate
         */
        std::cout << "verify_certificate (preverified " << preverified << " ) ..." << std::endl;

        char subject_name[256];
        X509* cert = X509_STORE_CTX_get_current_cert(ctx.native_handle());
        X509_NAME_oneline(X509_get_subject_name(cert), subject_name, 256);
        std::cout << "Verifying " << subject_name << std::endl;
        return true;
    }

    void handle_connect(const boost::system::error_code& error) {
        /*
         * Connects to server
         */
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
        /*
         * Hanshakes with server
         */
        std::cout << "handle_hanshake start" << std::endl;
        if (!error) {
            std::cout << "Hanshake OK" << std::endl;
            std::cout << "Request: " << std::endl;

            boost::asio::async_write(socket_, request_,
                                     boost::bind(&Client::handle_write, this,
                                                 boost::asio::placeholders::error));
        }
        else {
            std::cout << "Handshake failed: " << error.message() << std::endl;
        }
    }

    void handle_write(const boost::system::error_code& error) {
        /*
         * Writing request
         */
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
        /*
         * Reading status of response
         */
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
        /*
         * Reading headers of response
         */
        std::cout << "handle_read_headers\n";
        if (!error) {
            std::istream response_stream(&response_);
            std::string header;
            while (std::getline(response_stream, header) && header != "\r")
                //std::cout << header << "\n";
            std::cout << "\n";


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
        /*
         * Reading content of response
         */
        if (!error) {
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
        /*
         * Returns response in std::string
         */
        auto bufs = response_.data();
        std::string result(boost::asio::buffers_begin(bufs), boost::asio::buffers_begin(bufs) + response_.size());
        return result;
    }
};


class GameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();
    int n_avatars;
    boost::asio::io_context io_context;
    ssl::context* ctx;
    int target_followers;

signals:
    void openFirstWindow();

private:
    Ui::gamewindow *ui;
    Client *image_client;
    Client *search_client;

public slots:
    void load_game(int n_avatars);
    void set_avatar(int offset_shift = 0);

private slots:
    void on_backButton_clicked();
    void on_sendButton_clicked();
};

#endif // GAMEWINDOW_H
