#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    n_avatars = 0;
    gamewindow = new GameWindow;
    connect(this, &MainWindow::playSignal, gamewindow, &GameWindow::load_game);
    connect(gamewindow, &GameWindow::openFirstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_playButton_clicked() {
    if (MainWindow::n_avatars == 0) {
        QMessageBox msgBox;
        msgBox.setText("Нужно выбрать количество аватарок");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.exec();
    } else {
        gamewindow->show();
        this->close();
        emit playSignal(MainWindow::n_avatars);
    }
}

void MainWindow::on_hundredButton_clicked() {
    MainWindow::n_avatars = 100;
}

void MainWindow::on_k1Button_clicked() {
    MainWindow::n_avatars = 1000;
}

void MainWindow::on_k5Button_clicked() {
    MainWindow::n_avatars = 5000;
}
