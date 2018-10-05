#ifndef TABLEEDITOR_H
#define TABLEEDITOR_H

#include <QMainWindow>
#include <QtSql/QtSql>


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
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

//    bool connOpen()
//    {
//        mydb=QSqlDatabase::addDatabase("QSQLITE");
//        mydb.setDatabaseName("C:/Users/UserDesktop/Alpha/QT/Qt_Framework/db.sqlite3");

//        if(!mydb.open()) {
//            qDebug()<<("Failed");
//            return false;
//        }
//        else {
//            qDebug()<<("Connected");
//            return true;
//        }
//    }

private slots:
    void on_Loaddata_clicked();

    void on_ConnectToDB_clicked();

    void on_connection_result_linkActivated(const QString &link);

    void on_TableEditor_iconSizeChanged(const QSize &iconSize);

private:
    Ui::TableEditor *ui;
};

#endif // TABLEEDITOR_H
