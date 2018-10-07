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
                qDebug()<<("Connected");
            return true;
        }
    }

    bool showTable()
    {
        if (!connOpen())
        {
            connOpen();
        }
        QSqlQueryModel * myModel=new QSqlQueryModel();
        QSqlQuery query;
        query.exec("select * from tab;");
        if (!query.exec()) {
            qDebug()<<("Failed");
            return false;
        }
        else {
            qDebug()<<("Success executing");
            myModel->setQuery(query);
            ui->tableView->setModel(myModel);
            return true;
        }
    }

//    void execSQL(QString query)
//    {
//        if (!connOpen())
//        {
//            connOpen();
//        }
//        QString id, a, b, c;
//        id=ui->input_id->text();
//        a=ui->input_a->text();
//        b=ui->input_b->text();
//        c=ui->input_c->text();
//        QSqlQuery SqlQuery;
//        if(SqlQuery.exec(query))
//        {
//            QMessageBox::information(this, tr("Success"),tr("Done"));
//    }
//        else
//        {
//            QMessageBox::critical(this, tr("Error"), SqlQuery.lastError().text());
//        }
//    }

    void insertData()
    {
        if (!connOpen())
        {
            connOpen();
        }
        execSQL("select * from tab");
        QString id, a, b, c;
        id=ui->input_id->text();
        a=ui->input_a->text();
        b=ui->input_b->text();
        c=ui->input_c->text();
        QSqlQuery insertQuery;
        if (insertQuery.exec("insert into tab (id, a, b, c) values ('"+id+"','"+a+"','"+b+"','"+c+"');"))
        {
            QMessageBox::information(this, tr("Success"),tr("Done"));
            connClose();
        }
        else
        {
            QMessageBox::critical(this, tr("Error"), insertQuery.lastError().text());
        }
    }

    void updateData()
    {
        if (!connOpen())
        {
            connOpen();
        }
        QString id, a, b, c;
        id=ui->input_id->text();
        a=ui->input_a->text();
        b=ui->input_b->text();
        c=ui->input_c->text();
        QSqlQuery updateQuery;
        if (updateQuery.exec("update tab set id='"+id+"', a='"+a+"', b='"+b+"', c='"+c+"' where id='"+id+"'"))
        {
            QMessageBox::information(this, tr("Success"),tr("Done"));
            connClose();
        }
        else
        {
            QMessageBox::critical(this, tr("Error"), updateQuery.lastError().text());
        }
    }

    void deleteData()
    {
        if (!connOpen())
        {
            connOpen();
        }
        QString id, a, b, c;
        id=ui->input_id->text();
        a=ui->input_a->text();
        b=ui->input_b->text();
        c=ui->input_c->text();
        QSqlQuery updateQuery;
        if (updateQuery.exec("delete from tab where id='"+id+"'"))
        {
            QMessageBox::information(this, tr("Success"),tr("Done"));
            connClose();
        }
        else
        {
            QMessageBox::critical(this, tr("Error"), updateQuery.lastError().text());
        }
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
