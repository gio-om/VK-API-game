#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamewindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    GameWindow *gamewindow;
    int n_avatars;

signals:
    void playSignal(int n_avatars);


public slots:
    void on_playButton_clicked();


private slots:
    void on_hundredButton_clicked();
    void on_k1Button_clicked();
    void on_k5Button_clicked();
};
#endif // MAINWINDOW_H
