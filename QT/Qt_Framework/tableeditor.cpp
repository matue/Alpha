#include "tableeditor.h"

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

void TableEditor::on_LoadData_clicked() {
    showTable();
}

void TableEditor::on_InsertButton_clicked() {
    executeSQL("insert");
}

void TableEditor::on_UpdateButton_clicked() {
    executeSQL("update");
}

void TableEditor::on_DeleteButton_clicked() {
    executeSQL("delete");
}

