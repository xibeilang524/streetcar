/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_O;
    QAction *action_C;
    QAction *action_U;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(513, 430);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        action_O = new QAction(MainWindow);
        action_O->setObjectName(QStringLiteral("action_O"));
        action_O->setEnabled(true);
        action_C = new QAction(MainWindow);
        action_C->setObjectName(QStringLiteral("action_C"));
        action_U = new QAction(MainWindow);
        action_U->setObjectName(QStringLiteral("action_U"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/update.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_U->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 513, 28));
        menuBar->setDefaultUp(true);
        menuBar->setNativeMenuBar(true);
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu->menuAction());
        menu_F->addAction(action_O);
        menu_F->addAction(action_C);
        menu->addAction(action_U);
        toolBar->addAction(action_U);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_O->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", 0));
        action_C->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&C)", 0));
        action_U->setText(QApplication::translate("MainWindow", "\345\234\250\347\272\277\345\215\207\347\272\247(&U)", 0));
#ifndef QT_NO_TOOLTIP
        action_U->setToolTip(QApplication::translate("MainWindow", "\345\234\250\347\272\277\345\215\207\347\272\247(&U)", 0));
#endif // QT_NO_TOOLTIP
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", 0));
#ifndef QT_NO_TOOLTIP
        statusBar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        statusBar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        statusBar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
