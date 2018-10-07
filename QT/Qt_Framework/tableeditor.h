#ifndef TABLEEDITOR_H
#define TABLEEDITOR_H

#include <QMainWindow>
#include <QtSql>
#include <ui_tableeditor.h>
#include <QMessageBox>
#include <qstring>


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

    void connClose()
    {
        mydb.close();
        mydb=QSqlDatabase();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("../db.sqlite3");

            if(!mydb.open()) {
                qDebug()<<("Failed");
                qDebug() << mydb.lastError().text();
            return false;
        }
            else {
            return true;
        }
    }

    void showTable()
    {
        connOpen();
        QSqlQueryModel * myModel=new QSqlQueryModel();
        QSqlQuery select;
        if (!select.exec("select * from tab")) {
            QMessageBox::critical(this, tr("Error"), select.lastError().text());
        }
        else {
            myModel->setQuery(select);
            ui->tableView->setModel(myModel);
        }
        connClose();
    }

    void execSQL(QString action)
    {
        connOpen();
        QSqlQuery SqlQuery;
        QString id, a, b, c, query;
        id=ui->input_id->text();
        a=ui->input_a->text();
        b=ui->input_b->text();
        c=ui->input_c->text();
        if (action=="insert")
        {
            query="insert into tab (id, a, b, c) values ('"+id+"','"+a+"','"+b+"','"+c+"')";
        }
        if (action=="update")
        {
            query="update tab set id='"+id+"', a='"+a+"', b='"+b+"', c='"+c+"' where id='"+id+"'";
        }
        if (action=="delete")
        {
            query="delete from tab where id='"+id+"'";
        }
        if(SqlQuery.exec(query))
        {
            QMessageBox::information(this, tr("Success"),tr("Done"));
        }
        else
        {
            QMessageBox::critical(this, tr("Error"), SqlQuery.lastError().text());
        }
        connClose();
    }


private slots:
    void on_Loaddata_clicked();

    void on_InsertButton_clicked();

    void on_UpdateButton_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::TableEditor *ui;
};

#endif // TABLEEDITOR_H
