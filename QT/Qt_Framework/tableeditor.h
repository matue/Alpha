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

    void openConnection() {
        QString path=ui->input_path->text();
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName(path);
        mydb.open();
    }

    void closeConnection() {
        mydb.close();
        mydb=QSqlDatabase();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    void showTable() {
        openConnection();
        QSqlQueryModel* myModel=new QSqlQueryModel();
        QSqlQuery sqlQuery;
        QString query=ui->input_query->text();
        if (!sqlQuery.exec(query)) {
            ui->listWidget->addItem("Execute error: " +sqlQuery.lastError().text());
            ui->listWidget->scrollToBottom();
        }
        else {
           myModel->setQuery(sqlQuery);
           QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(myModel);
           proxyModel->setSourceModel(myModel);
           ui->tableView->setSortingEnabled(true);
           ui->tableView->setModel(proxyModel);
           ui->listWidget->addItem("Success execute: " +query);
           ui->listWidget->scrollToBottom();
         }
         closeConnection();
    }

    void executeSQL(QString action) {
        openConnection();
        QSqlQuery sqlQuery;
        QString query;
        QString id=ui->input_id->text();
        QString a=ui->input_a->text();
        QString b=ui->input_b->text();
        QString c=ui->input_c->text();

        if      (action=="insert") query="insert into tab (id, a, b, c) values ('"+id+"','"+a+"','"+b+"','"+c+"')";
        else if (action=="update") query="update tab set id='"+id+"', a='"+a+"', b='"+b+"', c='"+c+"' where id='"+id+"'";
        else if (action=="delete") query="delete from tab where id='"+id+"'";

        if(sqlQuery.exec(query)) {
           ui->listWidget->addItem("Success execute: " + query);
           ui->listWidget->scrollToBottom();
        }
        else {
           ui->listWidget->addItem("Execute error: " +sqlQuery.lastError().text());
           ui->listWidget->scrollToBottom();
        }
        closeConnection();
    }

private slots:
    void on_LoadData_clicked();

    void on_InsertButton_clicked();

    void on_UpdateButton_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::TableEditor* ui;
};

#endif // TABLEEDITOR_H
