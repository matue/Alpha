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
    QLabel *label_5;
    QLineEdit *input_path;
    QLabel *label;
    QLineEdit *input_id;
    QPushButton *LoadData;
    QLineEdit *input_query;
    QLabel *label_2;
    QLineEdit *input_a;
    QTableView *tableView;
    QLabel *label_3;
    QLineEdit *input_b;
    QLabel *label_4;
    QLineEdit *input_c;
    QPushButton *InsertButton;
    QPushButton *UpdateButton;
    QPushButton *DeleteButton;
    QLabel *label_6;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TableEditor)
    {
        if (TableEditor->objectName().isEmpty())
            TableEditor->setObjectName(QStringLiteral("TableEditor"));
        TableEditor->resize(809, 593);
        centralWidget = new QWidget(TableEditor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        input_path = new QLineEdit(centralWidget);
        input_path->setObjectName(QStringLiteral("input_path"));

        gridLayout->addWidget(input_path, 0, 1, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 3, 1, 1);

        input_id = new QLineEdit(centralWidget);
        input_id->setObjectName(QStringLiteral("input_id"));

        gridLayout->addWidget(input_id, 0, 4, 1, 3);

        LoadData = new QPushButton(centralWidget);
        LoadData->setObjectName(QStringLiteral("LoadData"));

        gridLayout->addWidget(LoadData, 1, 0, 1, 2);

        input_query = new QLineEdit(centralWidget);
        input_query->setObjectName(QStringLiteral("input_query"));

        gridLayout->addWidget(input_query, 1, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        input_a = new QLineEdit(centralWidget);
        input_a->setObjectName(QStringLiteral("input_a"));

        gridLayout->addWidget(input_a, 1, 4, 1, 3);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 2, 0, 5, 3);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 3, 1, 1);

        input_b = new QLineEdit(centralWidget);
        input_b->setObjectName(QStringLiteral("input_b"));

        gridLayout->addWidget(input_b, 2, 4, 1, 3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 3, 1, 1);

        input_c = new QLineEdit(centralWidget);
        input_c->setObjectName(QStringLiteral("input_c"));

        gridLayout->addWidget(input_c, 3, 4, 1, 3);

        InsertButton = new QPushButton(centralWidget);
        InsertButton->setObjectName(QStringLiteral("InsertButton"));

        gridLayout->addWidget(InsertButton, 4, 4, 1, 1);

        UpdateButton = new QPushButton(centralWidget);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        gridLayout->addWidget(UpdateButton, 4, 5, 1, 1);

        DeleteButton = new QPushButton(centralWidget);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        gridLayout->addWidget(DeleteButton, 4, 6, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 3, 1, 2);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setAutoScrollMargin(16);
        listWidget->setTextElideMode(Qt::ElideRight);

        gridLayout->addWidget(listWidget, 6, 3, 1, 4);

        TableEditor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TableEditor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 809, 21));
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
        label_5->setText(QApplication::translate("TableEditor", "Path:", nullptr));
        input_path->setText(QApplication::translate("TableEditor", "../db.sqlite3", nullptr));
        input_path->setPlaceholderText(QString());
        label->setText(QApplication::translate("TableEditor", "Id", nullptr));
        LoadData->setText(QApplication::translate("TableEditor", "Execute:", nullptr));
        input_query->setText(QApplication::translate("TableEditor", "select * from tab", nullptr));
        input_query->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("TableEditor", "a", nullptr));
        label_3->setText(QApplication::translate("TableEditor", "b", nullptr));
        label_4->setText(QApplication::translate("TableEditor", "c", nullptr));
        InsertButton->setText(QApplication::translate("TableEditor", "Insert", nullptr));
        UpdateButton->setText(QApplication::translate("TableEditor", "Update by Id", nullptr));
        DeleteButton->setText(QApplication::translate("TableEditor", "Delete by Id", nullptr));
        label_6->setText(QApplication::translate("TableEditor", "Out:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableEditor: public Ui_TableEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEEDITOR_H
