/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *logoutButton;
    QPushButton *refreshButton;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *confirmButton;
    QLineEdit *lineEdit;
    QPushButton *execButton;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 600);
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 0, 401, 71));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        tableWidget = new QTableWidget(login);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(254, 70, 535, 511));
        logoutButton = new QPushButton(login);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(30, 520, 169, 51));
        QFont font1;
        font1.setPointSize(24);
        logoutButton->setFont(font1);
        refreshButton = new QPushButton(login);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setGeometry(QRect(30, 60, 169, 51));
        refreshButton->setFont(font1);
        addButton = new QPushButton(login);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(30, 140, 169, 51));
        addButton->setFont(font1);
        deleteButton = new QPushButton(login);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(30, 220, 169, 51));
        deleteButton->setFont(font1);
        confirmButton = new QPushButton(login);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(30, 300, 169, 51));
        confirmButton->setFont(font1);
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 390, 231, 22));
        execButton = new QPushButton(login);
        execButton->setObjectName("execButton");
        execButton->setGeometry(QRect(30, 420, 169, 51));
        execButton->setFont(font1);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        label->setText(QCoreApplication::translate("login", "Baza danych wi\304\231\305\272ni\303\263w", nullptr));
        logoutButton->setText(QCoreApplication::translate("login", "Wyloguj", nullptr));
        refreshButton->setText(QCoreApplication::translate("login", "Od\305\233wie\305\274", nullptr));
        addButton->setText(QCoreApplication::translate("login", "Dodaj", nullptr));
        deleteButton->setText(QCoreApplication::translate("login", "Usu\305\204", nullptr));
        confirmButton->setText(QCoreApplication::translate("login", "Zatwierd\305\272", nullptr));
        execButton->setText(QCoreApplication::translate("login", "SQLquery", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
