/********************************************************************************
** Form generated from reading UI file 'tableeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEEDITOR_H
#define UI_TABLEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableEditor
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QPushButton *Loaddata;
    QPushButton *InsertButton;
    QLineEdit *input_id;
    QLineEdit *input_a;
    QLineEdit *input_b;
    QLineEdit *input_c;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *UpdateButton;
    QPushButton *DeleteButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TableEditor)
    {
        if (TableEditor->objectName().isEmpty())
            TableEditor->setObjectName(QStringLiteral("TableEditor"));
        TableEditor->resize(1000, 625);
        centralWidget = new QWidget(TableEditor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 120, 491, 391));
        Loaddata = new QPushButton(centralWidget);
        Loaddata->setObjectName(QStringLiteral("Loaddata"));
        Loaddata->setGeometry(QRect(40, 30, 141, 23));
        InsertButton = new QPushButton(centralWidget);
        InsertButton->setObjectName(QStringLiteral("InsertButton"));
        InsertButton->setGeometry(QRect(620, 280, 81, 23));
        input_id = new QLineEdit(centralWidget);
        input_id->setObjectName(QStringLiteral("input_id"));
        input_id->setGeometry(QRect(620, 120, 261, 21));
        input_a = new QLineEdit(centralWidget);
        input_a->setObjectName(QStringLiteral("input_a"));
        input_a->setGeometry(QRect(620, 160, 261, 21));
        input_b = new QLineEdit(centralWidget);
        input_b->setObjectName(QStringLiteral("input_b"));
        input_b->setGeometry(QRect(620, 200, 261, 21));
        input_c = new QLineEdit(centralWidget);
        input_c->setObjectName(QStringLiteral("input_c"));
        input_c->setGeometry(QRect(620, 240, 261, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(600, 120, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 160, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 200, 41, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(600, 240, 47, 13));
        UpdateButton = new QPushButton(centralWidget);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));
        UpdateButton->setGeometry(QRect(710, 280, 81, 23));
        DeleteButton = new QPushButton(centralWidget);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(800, 280, 81, 23));
        TableEditor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TableEditor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 21));
        TableEditor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TableEditor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TableEditor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TableEditor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TableEditor->setStatusBar(statusBar);

        retranslateUi(TableEditor);

        QMetaObject::connectSlotsByName(TableEditor);
    } // setupUi

    void retranslateUi(QMainWindow *TableEditor)
    {
        TableEditor->setWindowTitle(QApplication::translate("TableEditor", "TableEditor", nullptr));
        Loaddata->setText(QApplication::translate("TableEditor", "Load/Refresh Data", nullptr));
        InsertButton->setText(QApplication::translate("TableEditor", "Insert", nullptr));
        label->setText(QApplication::translate("TableEditor", "Id", nullptr));
        label_2->setText(QApplication::translate("TableEditor", "A", nullptr));
        label_3->setText(QApplication::translate("TableEditor", "B", nullptr));
        label_4->setText(QApplication::translate("TableEditor", "C", nullptr));
        UpdateButton->setText(QApplication::translate("TableEditor", "Update by Id", nullptr));
        DeleteButton->setText(QApplication::translate("TableEditor", "Delete by Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableEditor: public Ui_TableEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEEDITOR_H
