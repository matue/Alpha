#include "tableeditor.h"
#include "ui_tableeditor.h"
#include <QTableView>

TableEditor::TableEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TableEditor)
{
    ui->setupUi(this);

}

TableEditor::~TableEditor()
{
    delete ui;
}

void TableEditor::on_Loaddata_clicked()
{
    execSql();
}

void TableEditor::on_ConnectToDB_clicked()
{
    connOpen();
}

void TableEditor::on_DisconnectFromDB_clicked()
{
    connClose();
}


