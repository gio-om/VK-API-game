#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <iostream>
#include <fstream>
#include <QDebug>
#include <QMessageBox>

const std::string access_file_name = "access_key.txt";
const std::string HOST = "api.vk.com";
const std::string API_METHOD = "/method/users.search?";
const std::vector<std::string> fields = {"photo_400", "followers_count"};
std::string ACCESS_TOKEN;

bool read_access_key(const std::string& file_name) {
    /*
     * This function reads access key for vk.api from file_name into global ACCESS_TOKEN
     */
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

void create_api_request(std::string& URL, const std::string& host, const std::string& api_method,
               const std::vector<std::string>& fields, const int offset = 0, const int count = 1, bool has_photo = true, int sex = 0) {
    /*
     * Creates an api request (url) with paramethers, saves request in URL
     */
    URL = "https://" + host + api_method +
          "count=" + std::to_string(count) +
          "&sex=" + std::to_string(sex) +
          "&has_photo=" + std::to_string(has_photo) +
          "&offset=" + std::to_string(offset) +
          "&fields=";
    for (int i = 0; i < fields.size(); ++i) {
        URL += fields[i];
        if (i != fields.size() - 1) {
            URL += ",";
        }
    }
    URL += "&access_token=" + ACCESS_TOKEN + "&v=5.131";
}

std::string getFieldFromJson(const std::string& jsonString, const std::string& field, int num_item=0) {
    /*
     * Gets any field from jsonString by key
     */
    json js = json::parse(jsonString);
    return to_string(js["response"]["items"][num_item][field]);
}


GameWindow::GameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    read_access_key(access_file_name);
    ctx = new ssl::context(ssl::context::sslv23_client);
    ctx->set_default_verify_paths();
}


void GameWindow::on_backButton_clicked() {
    this->close();
    emit openFirstWindow();
}

void GameWindow::load_game(int n_avatars) {
    qDebug() << "n_avatars: " << n_avatars;
    this->n_avatars = n_avatars;
    set_avatar();
}

void GameWindow::set_avatar(int offset_shift) {
    /*
     * Loads image on game screen
     */
    std::string API_REQUEST;
    create_api_request(API_REQUEST, HOST, API_METHOD, fields, rand() % 1001 + offset_shift);
    io_context.reset();
    search_client = new Client(io_context, *ctx);
    search_client->SendRequest(API_REQUEST);
    io_context.run();
    std::string resp = search_client->getResponse();
    std::cout << resp << std::endl;
    if (getFieldFromJson(resp, "followers_count") == "null") {
        set_avatar(offset_shift + rand() % 11);
        return;
    }
    std::string IMG_URL = getFieldFromJson(resp, "photo_400").substr(3, getFieldFromJson(resp, "photo_400").size() - 6);
    target_followers = std::stoi(getFieldFromJson(resp, "followers_count"));

    io_context.reset();
    image_client = new Client(io_context, *ctx);

    image_client->SendRequest(IMG_URL);
    io_context.run();
    resp = image_client->getResponse();
    QByteArray byteArray(resp.c_str(), resp.length());
    QPixmap img;
    img.loadFromData(byteArray);
    ui->avatarLabel->setPixmap(img);

    delete image_client;
    delete search_client;
}


void GameWindow::on_sendButton_clicked() {
    /*
     * Checks neuro and user answers and gives score to winner
     */
    int guess, neuro;
    bool correct_input;
    guess = ui->userInput->text().toInt(&correct_input);

    // Here input reading from neural network
    neuro = target_followers + 50;

    std::cout << "guess: " << guess << std::endl << "target: " << target_followers << std::endl << "neuro: " << neuro << std::endl;

    if (correct_input) {
        ui->neuroInput->setText(QString::number(neuro));
        ui->neuroInput->repaint();
        ui->targetInput->setText(QString::number(target_followers));
        ui->targetInput->repaint();
        if (abs(guess - target_followers) < abs(neuro - target_followers)) {
            qDebug() << "user won" << Qt::endl;
            ui->userScore->setText(QString::number(ui->userScore->text().toInt() + 1));
        } else {
            qDebug() << "neuro won" << Qt::endl;
            ui->neuroScore->setText(QString::number(ui->neuroScore->text().toInt() + 1));
        }
        sleep(1);
        ui->neuroInput->setText("???");
        ui->targetInput->setText("???");
        set_avatar();
    } else {
        QMessageBox msgBox;
        msgBox.setText("Введите число!");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.exec();
    }
}

GameWindow::~GameWindow() {
    delete ui;
    delete image_client;
    delete search_client;
}
