/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "myqgraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAddLine;
    QAction *actionAddStation;
    QAction *actions;
    QAction *actioncha;
    QAction *actionReturnSubway;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionAddEdge;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer_3;
    QTextBrowser *textBrowser;
    MyQGraphicsView *myQGraphicsView;
    QMenuBar *menubar;
    QMenu *menuTool;
    QMenu *menu;
    QMenu *menuCheck;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 618);
        MainWindow->setMinimumSize(QSize(1000, 618));
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        actionAddLine = new QAction(MainWindow);
        actionAddLine->setObjectName(QString::fromUtf8("actionAddLine"));
        actionAddStation = new QAction(MainWindow);
        actionAddStation->setObjectName(QString::fromUtf8("actionAddStation"));
        actions = new QAction(MainWindow);
        actions->setObjectName(QString::fromUtf8("actions"));
        actioncha = new QAction(MainWindow);
        actioncha->setObjectName(QString::fromUtf8("actioncha"));
        actionReturnSubway = new QAction(MainWindow);
        actionReturnSubway->setObjectName(QString::fromUtf8("actionReturnSubway"));
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionAddEdge = new QAction(MainWindow);
        actionAddEdge->setObjectName(QString::fromUtf8("actionAddEdge"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_2->addWidget(comboBox_2, 1, 1, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(widget_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 3, 2, 1);

        radioButton = new QRadioButton(widget_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        gridLayout->addWidget(radioButton, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget_2, 2, 0, 1, 2);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_2->addWidget(textBrowser, 3, 0, 1, 2);


        horizontalLayout->addWidget(widget);

        myQGraphicsView = new MyQGraphicsView(centralwidget);
        myQGraphicsView->setObjectName(QString::fromUtf8("myQGraphicsView"));

        horizontalLayout->addWidget(myQGraphicsView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        menuTool = new QMenu(menubar);
        menuTool->setObjectName(QString::fromUtf8("menuTool"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuCheck = new QMenu(menubar);
        menuCheck->setObjectName(QString::fromUtf8("menuCheck"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuTool->menuAction());
        menubar->addAction(menuCheck->menuAction());
        menubar->addAction(menu->menuAction());
        menuTool->addAction(actionAddLine);
        menuTool->addAction(actionAddStation);
        menuTool->addAction(actionAddEdge);
        menuCheck->addAction(actionReturnSubway);
        menuCheck->addSeparator();
        menuCheck->addAction(actionZoomIn);
        menuCheck->addAction(actionZoomOut);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAddLine->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\272\277\350\267\257", nullptr));
        actionAddStation->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\253\231\347\202\271", nullptr));
        actions->setText(QCoreApplication::translate("MainWindow", "s", nullptr));
        actioncha->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\347\272\277\350\267\257", nullptr));
        actionReturnSubway->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236\345\234\260\351\223\201\347\272\277\350\267\257\345\233\276", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
        actionAddEdge->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\277\236\347\272\277", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\265\267\347\202\271\347\253\231", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\273\210\347\202\271\347\253\231", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\346\215\242\344\271\230\346\234\200\345\260\221", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\347\272\277\350\267\257", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\350\267\257\347\272\277\346\234\200\347\237\255", nullptr));
        menuTool->setTitle(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251", nullptr));
        menuCheck->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
