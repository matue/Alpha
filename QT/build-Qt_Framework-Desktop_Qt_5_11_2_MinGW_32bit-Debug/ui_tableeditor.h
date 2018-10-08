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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
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
    QGridLayout *gridLayout;
    QPushButton *Loaddata;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *input_id;
    QLabel *label_2;
    QLineEdit *input_a;
    QLabel *label_3;
    QLineEdit *input_b;
    QLabel *label_4;
    QLineEdit *input_c;
    QPushButton *InsertButton;
    QPushButton *UpdateButton;
    QPushButton *DeleteButton;
    QListWidget *listWidget;
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
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Loaddata = new QPushButton(centralWidget);
        Loaddata->setObjectName(QStringLiteral("Loaddata"));

        gridLayout->addWidget(Loaddata, 0, 0, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 6, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        input_id = new QLineEdit(centralWidget);
        input_id->setObjectName(QStringLiteral("input_id"));

        gridLayout->addWidget(input_id, 1, 2, 1, 2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        input_a = new QLineEdit(centralWidget);
        input_a->setObjectName(QStringLiteral("input_a"));

        gridLayout->addWidget(input_a, 2, 2, 1, 2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        input_b = new QLineEdit(centralWidget);
        input_b->setObjectName(QStringLiteral("input_b"));

        gridLayout->addWidget(input_b, 3, 2, 1, 2);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        input_c = new QLineEdit(centralWidget);
        input_c->setObjectName(QStringLiteral("input_c"));

        gridLayout->addWidget(input_c, 4, 2, 1, 2);

        InsertButton = new QPushButton(centralWidget);
        InsertButton->setObjectName(QStringLiteral("InsertButton"));

        gridLayout->addWidget(InsertButton, 5, 2, 1, 1);

        UpdateButton = new QPushButton(centralWidget);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        gridLayout->addWidget(UpdateButton, 5, 3, 1, 1);

        DeleteButton = new QPushButton(centralWidget);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        gridLayout->addWidget(DeleteButton, 5, 4, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 6, 2, 1, 3);

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
        label->setText(QApplication::translate("TableEditor", "Id", nullptr));
        label_2->setText(QApplication::translate("TableEditor", "A", nullptr));
        label_3->setText(QApplication::translate("TableEditor", "B", nullptr));
        label_4->setText(QApplication::translate("TableEditor", "C", nullptr));
        InsertButton->setText(QApplication::translate("TableEditor", "Insert", nullptr));
        UpdateButton->setText(QApplication::translate("TableEditor", "Update by Id", nullptr));
        DeleteButton->setText(QApplication::translate("TableEditor", "Delete by Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableEditor: public Ui_TableEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEEDITOR_H
