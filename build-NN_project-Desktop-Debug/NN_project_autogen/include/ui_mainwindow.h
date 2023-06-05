/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_5;
    QLabel *title;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *hundredButton;
    QRadioButton *k1Button;
    QRadioButton *k5Button;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *playButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menubar;
    QMenu *menuAvatar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(390, 524);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(180, 180));
        label->setMaximumSize(QSize(180, 180));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/vkIcon.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        title = new QLabel(centralwidget);
        title->setObjectName("title");
        QFont font;
        font.setPointSize(14);
        title->setFont(font);
        title->setScaledContents(false);
        title->setWordWrap(true);

        verticalLayout_3->addWidget(title);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        hundredButton = new QRadioButton(centralwidget);
        hundredButton->setObjectName("hundredButton");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hundredButton->sizePolicy().hasHeightForWidth());
        hundredButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(hundredButton);

        k1Button = new QRadioButton(centralwidget);
        k1Button->setObjectName("k1Button");
        sizePolicy.setHeightForWidth(k1Button->sizePolicy().hasHeightForWidth());
        k1Button->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(k1Button);

        k5Button = new QRadioButton(centralwidget);
        k5Button->setObjectName("k5Button");
        sizePolicy.setHeightForWidth(k5Button->sizePolicy().hasHeightForWidth());
        k5Button->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(k5Button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        playButton = new QPushButton(centralwidget);
        playButton->setObjectName("playButton");
        playButton->setEnabled(true);
        sizePolicy.setHeightForWidth(playButton->sizePolicy().hasHeightForWidth());
        playButton->setSizePolicy(sizePolicy);
        playButton->setMinimumSize(QSize(100, 100));
        playButton->setMaximumSize(QSize(200, 200));
        QFont font1;
        font1.setPointSize(20);
        playButton->setFont(font1);

        horizontalLayout_2->addWidget(playButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 390, 22));
        menuAvatar = new QMenu(menubar);
        menuAvatar->setObjectName("menuAvatar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAvatar->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Avatar", nullptr));
        label->setText(QString());
        title->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\260\320\262\320\260\321\202\320\276\321\200\320\276\320\272 \320\264\320\273\321\217 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270 \320\275\320\265\320\271\321\200\320\276\321\201\320\265\321\202\320\270", nullptr));
        hundredButton->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        k1Button->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        k5Button->setText(QCoreApplication::translate("MainWindow", "5000", nullptr));
        playButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        menuAvatar->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
