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

}

void TableEditor::on_ConnectToDB_clicked()
{
//    connOpen();
}



