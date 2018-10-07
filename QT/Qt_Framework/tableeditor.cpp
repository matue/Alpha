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
    showTable();
}

void TableEditor::on_InsertButton_clicked()
{
    execSQL("insert");
}

void TableEditor::on_UpdateButton_clicked()
{
    execSQL("update");
}

void TableEditor::on_DeleteButton_clicked()
{
    execSQL("delete");
}
