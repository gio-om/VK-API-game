/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gamewindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QLabel *userScore;
    QSpacerItem *horizontalSpacer_7;
    QLabel *neuroScore;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *avatarLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *title;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *neuroInput;
    QLabel *label_3;
    QLineEdit *userInput;
    QLabel *label_5;
    QLabel *targetInput;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName("gamewindow");
        gamewindow->resize(509, 743);
        verticalLayout = new QVBoxLayout(gamewindow);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        backButton = new QPushButton(gamewindow);
        backButton->setObjectName("backButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setMinimumSize(QSize(30, 45));
        backButton->setMaximumSize(QSize(30, 16777215));
        backButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("go-previous");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        backButton->setIcon(icon);

        horizontalLayout_2->addWidget(backButton);

        horizontalSpacer_6 = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label = new QLabel(gamewindow);
        label->setObjectName("label");
        label->setMinimumSize(QSize(50, 50));
        label->setMaximumSize(QSize(50, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/playerIcon.png")));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);

        userScore = new QLabel(gamewindow);
        userScore->setObjectName("userScore");
        userScore->setMaximumSize(QSize(30, 16777215));
        QFont font;
        font.setPointSize(18);
        userScore->setFont(font);

        horizontalLayout_2->addWidget(userScore);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        neuroScore = new QLabel(gamewindow);
        neuroScore->setObjectName("neuroScore");
        neuroScore->setMaximumSize(QSize(30, 16777215));
        neuroScore->setFont(font);

        horizontalLayout_2->addWidget(neuroScore);

        label_4 = new QLabel(gamewindow);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(50, 50));
        label_4->setMaximumSize(QSize(50, 50));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/neuralIcon.png")));
        label_4->setScaledContents(true);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        avatarLabel = new QLabel(gamewindow);
        avatarLabel->setObjectName("avatarLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(avatarLabel->sizePolicy().hasHeightForWidth());
        avatarLabel->setSizePolicy(sizePolicy1);
        avatarLabel->setMinimumSize(QSize(400, 400));
        avatarLabel->setMaximumSize(QSize(400, 400));
        avatarLabel->setLayoutDirection(Qt::LeftToRight);
        avatarLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(avatarLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        title = new QLabel(gamewindow);
        title->setObjectName("title");
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        verticalSpacer = new QSpacerItem(2, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(gamewindow);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        neuroInput = new QLabel(gamewindow);
        neuroInput->setObjectName("neuroInput");
        neuroInput->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, neuroInput);

        label_3 = new QLabel(gamewindow);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        userInput = new QLineEdit(gamewindow);
        userInput->setObjectName("userInput");
        userInput->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, userInput);

        label_5 = new QLabel(gamewindow);
        label_5->setObjectName("label_5");
        QFont font2;
        font2.setPointSize(16);
        label_5->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        targetInput = new QLabel(gamewindow);
        targetInput->setObjectName("targetInput");
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        targetInput->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, targetInput);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        sendButton = new QPushButton(gamewindow);
        sendButton->setObjectName("sendButton");
        sizePolicy1.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy1);
        sendButton->setMinimumSize(QSize(150, 100));
        sendButton->setMaximumSize(QSize(300, 200));
        sendButton->setFont(font2);

        horizontalLayout_3->addWidget(sendButton);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_5);


        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QWidget *gamewindow)
    {
        gamewindow->setWindowTitle(QCoreApplication::translate("gamewindow", "Form", nullptr));
        backButton->setText(QString());
        label->setText(QString());
        userScore->setText(QCoreApplication::translate("gamewindow", "0", nullptr));
        neuroScore->setText(QCoreApplication::translate("gamewindow", "0", nullptr));
        label_4->setText(QString());
        avatarLabel->setText(QString());
        title->setText(QCoreApplication::translate("gamewindow", "\320\235\320\260\320\277\320\270\321\210\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\264\320\277\320\270\321\201\321\207\320\270\320\272\320\276\320\262", nullptr));
        label_2->setText(QCoreApplication::translate("gamewindow", "\320\236\321\202\320\262\320\265\321\202 \320\275\320\265\320\271\321\200\320\276\321\201\320\265\321\202\320\270", nullptr));
        neuroInput->setText(QCoreApplication::translate("gamewindow", "???", nullptr));
        label_3->setText(QCoreApplication::translate("gamewindow", "\320\222\320\260\321\210 \320\276\321\202\320\262\320\265\321\202", nullptr));
        label_5->setText(QCoreApplication::translate("gamewindow", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\271 \320\276\321\202\320\262\320\265\321\202", nullptr));
        targetInput->setText(QCoreApplication::translate("gamewindow", "???", nullptr));
        sendButton->setText(QCoreApplication::translate("gamewindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
