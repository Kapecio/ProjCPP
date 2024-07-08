#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connectToDatabase();
}

MainWindow::~MainWindow()
{
    delete ui;
    if (db.isOpen()) {
        db.close();
    }
}

void MainWindow::connectToDatabase()
{
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("bazawiezniow");
    db.setUserName("postgres");
    db.setPassword("admin");

    if (!db.open()) {
        QMessageBox::critical(this, "Database Connection Failed", db.lastError().text());
    }
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    ui->lineEdit_6->setEchoMode(QLineEdit::Password);

}

void MainWindow::on_pushButton_2_clicked()
{
    QString username = ui->lineEdit_5->text();
    QString password = ui->lineEdit_6->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Logowanie nieudane!", "Uzupełnij oba pola login i hasło!");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }

    if (query.next()) {
        QMessageBox::information(this, "Zalogowano!", "Poprawnie zalogowano!");
        login *loginForm = new login();
        loginForm->setDatabase(db);
        loginForm->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Logowanie nieudane!", "Błędny login lub hasło.");
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString username = ui->lineEdit_3->text();
    QString password = ui->lineEdit_4->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Rejestracja nieudana!", "Należy wpisać login i hasło.");
        return;
    }

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT * FROM users WHERE username = :username");
    checkQuery.bindValue(":username", username);
    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Database Error", checkQuery.lastError().text());
        return;
    }

    if (checkQuery.next()) {
        QMessageBox::warning(this, "Rejestracja nieudana!", "Taki użytkownik już istnieje. Wybierz inne dane.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }

    QMessageBox::information(this, "Rejestracja udana!", "Użytkownik zarejestrowany!");

    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}



void MainWindow::on_pushButton_4_clicked()
{
    this->close();
}

