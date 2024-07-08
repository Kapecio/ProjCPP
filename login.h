#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QSqlError>
#include <ui_mainwindow.h>
#include <QSqlQuery>
#include <QDateTime>


namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT


public:
    explicit login(QWidget *parent = nullptr);
    ~login();
    void setDatabase(const QSqlDatabase &db);

private slots:
    void handleRefreshButton();
    void on_confirmButton_clicked();
    void on_addButton_clicked();
    void onCellChanged(int row, int column);
    void on_logoutButton_clicked();
    void on_deleteButton_clicked();

    void on_execButton_clicked();

private:
    Ui::login *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    void loadTableData();
};

#endif // LOGIN_H
