/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Order;
    QAction *actionOrder_List;
    QAction *actionKnowledge;
    QAction *actionRecent_News;
    QAction *actionManual;
    QAction *actionFAQ;
    QAction *actionAbout;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuVisa;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew_Order = new QAction(MainWindow);
        actionNew_Order->setObjectName(QStringLiteral("actionNew_Order"));
        actionOrder_List = new QAction(MainWindow);
        actionOrder_List->setObjectName(QStringLiteral("actionOrder_List"));
        actionKnowledge = new QAction(MainWindow);
        actionKnowledge->setObjectName(QStringLiteral("actionKnowledge"));
        actionRecent_News = new QAction(MainWindow);
        actionRecent_News->setObjectName(QStringLiteral("actionRecent_News"));
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName(QStringLiteral("actionManual"));
        actionFAQ = new QAction(MainWindow);
        actionFAQ->setObjectName(QStringLiteral("actionFAQ"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuVisa = new QMenu(menubar);
        menuVisa->setObjectName(QStringLiteral("menuVisa"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuVisa->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuVisa->addAction(actionNew_Order);
        menuVisa->addAction(actionOrder_List);
        menuVisa->addSeparator();
        menuVisa->addAction(actionKnowledge);
        menuVisa->addAction(actionRecent_News);
        menuHelp->addAction(actionManual);
        menuHelp->addAction(actionFAQ);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Kimi Business Support System", 0));
        actionNew_Order->setText(QApplication::translate("MainWindow", "New Order", 0));
        actionOrder_List->setText(QApplication::translate("MainWindow", "Order List", 0));
        actionKnowledge->setText(QApplication::translate("MainWindow", "Knowledge", 0));
        actionRecent_News->setText(QApplication::translate("MainWindow", "Recent News", 0));
        actionManual->setText(QApplication::translate("MainWindow", "Manual", 0));
        actionFAQ->setText(QApplication::translate("MainWindow", "FAQ", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuVisa->setTitle(QApplication::translate("MainWindow", "Visa", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
