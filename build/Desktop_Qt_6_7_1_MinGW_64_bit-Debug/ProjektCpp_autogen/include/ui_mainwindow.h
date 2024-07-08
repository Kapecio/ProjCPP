/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 30, 331, 61));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 260, 161, 61));
        QFont font1;
        font1.setPointSize(24);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 270, 161, 41));
        label_3->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(520, 310, 161, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_2->addWidget(lineEdit_4);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(120, 310, 161, 81));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout_3->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget_2);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout_3->addWidget(lineEdit_6);

        lineEdit_6->raise();
        lineEdit_5->raise();
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 460, 75, 24));
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(470, 320, 51, 61));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName("label_6");

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName("label_7");

        verticalLayout_4->addWidget(label_7);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(70, 320, 51, 61));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(560, 460, 75, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(360, 550, 75, 24));
        MainWindow->setCentralWidget(centralwidget);
        layoutWidget->raise();
        label->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();
        pushButton_4->raise();
        pushButton_2->raise();
        label_2->raise();
        label_3->raise();
        pushButton_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Witaj u\305\274ytkowniku!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Logowanie", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Rejestracja", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "login", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "haslo", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "login", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "haslo", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Zaloguj", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Login:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Has\305\202o:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Login:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Has\305\202o:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Zarejestruj", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Wyjscie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
