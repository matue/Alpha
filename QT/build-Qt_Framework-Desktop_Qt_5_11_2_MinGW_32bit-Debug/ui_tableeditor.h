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
    QPushButton *ConnectToDB;
    QPushButton *DisconnectFromDB;
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
        tableView->setGeometry(QRect(40, 120, 901, 391));
        Loaddata = new QPushButton(centralWidget);
        Loaddata->setObjectName(QStringLiteral("Loaddata"));
        Loaddata->setGeometry(QRect(40, 60, 75, 23));
        ConnectToDB = new QPushButton(centralWidget);
        ConnectToDB->setObjectName(QStringLiteral("ConnectToDB"));
        ConnectToDB->setGeometry(QRect(40, 30, 101, 23));
        DisconnectFromDB = new QPushButton(centralWidget);
        DisconnectFromDB->setObjectName(QStringLiteral("DisconnectFromDB"));
        DisconnectFromDB->setGeometry(QRect(160, 30, 111, 23));
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
        Loaddata->setText(QApplication::translate("TableEditor", "Load Data", nullptr));
        ConnectToDB->setText(QApplication::translate("TableEditor", "Connect to DB", nullptr));
        DisconnectFromDB->setText(QApplication::translate("TableEditor", "Disconnect from DB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableEditor: public Ui_TableEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEEDITOR_H
