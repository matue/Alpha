#ifndef TABLEEDITOR_H
#define TABLEEDITOR_H

#include <QMainWindow>
#include <QtSql>
#include <ui_tableeditor.h>

namespace Ui {
class TableEditor;
}

class TableEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit TableEditor(QWidget *parent = nullptr);
    ~TableEditor();

public:
    QSqlDatabase mydb;

    void connClose() // закрытие соединения
    {
        mydb.close();
        mydb=QSqlDatabase();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen() // соединяемся с БД
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("../db.sqlite3"); //из корня

            if(!mydb.open()) {
                qDebug()<<("Failed");
                qDebug() << mydb.lastError().text();
            return false;
        }
            else {
                qDebug()<<("Connected");
            return true;
        }
    }

    bool execSql() //извлекаем select
    {
        QSqlQueryModel * modal=new QSqlQueryModel();
        QSqlQuery query;
        query.exec("SELECT * FROM tab;");
        //qDebug() << "Tables: " << mydb.tables(); //вывод всех таблиц
        //qDebug() << query.lastError ().text();
        modal->setQuery(query);
        ui->tableView->setModel(modal);
        connClose();
        //qDebug() << (modal->rowCount());
    }

private slots:
    void on_Loaddata_clicked();

    void on_ConnectToDB_clicked();

    void on_DisconnectFromDB_clicked();

private:
    Ui::TableEditor *ui;
};

#endif // TABLEEDITOR_H
