/********************************************************************************
** Form generated from reading UI file 'subwaycontrolwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWAYCONTROLWINDOW_H
#define UI_SUBWAYCONTROLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubwayControlWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QWidget *stackedWidgetPage2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser_3;
    QWidget *stackedWidgetPage3;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QComboBox *comboBox;
    QLabel *label_13;
    QComboBox *comboBox_2;
    QLabel *label_14;
    QComboBox *comboBox_3;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_6;
    QTextBrowser *textBrowser_4;

    void setupUi(QWidget *SubwayControlWindow)
    {
        if (SubwayControlWindow->objectName().isEmpty())
            SubwayControlWindow->setObjectName(QString::fromUtf8("SubwayControlWindow"));
        SubwayControlWindow->resize(800, 495);
        SubwayControlWindow->setMinimumSize(QSize(800, 495));
        SubwayControlWindow->setMaximumSize(QSize(1000, 618));
        QFont font;
        font.setPointSize(11);
        SubwayControlWindow->setFont(font);
        horizontalLayout = new QHBoxLayout(SubwayControlWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(SubwayControlWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 0));
        stackedWidget->setMaximumSize(QSize(1000, 618));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        horizontalLayout_2 = new QHBoxLayout(stackedWidgetPage1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget = new QWidget(stackedWidgetPage1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(300, 16777215));
        widget->setFont(font);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(200, 16777215));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 4);


        horizontalLayout_2->addWidget(widget);

        textBrowser = new QTextBrowser(stackedWidgetPage1);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font1;
        font1.setPointSize(9);
        textBrowser->setFont(font1);

        horizontalLayout_2->addWidget(textBrowser);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        stackedWidgetPage2->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(stackedWidgetPage2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_3 = new QWidget(stackedWidgetPage2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(350, 0));
        widget_3->setMaximumSize(QSize(350, 16777215));
        widget_3->setFont(font);
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_5, 0, 1, 1, 1);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 2);

        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 1, 2, 1, 2);

        verticalSpacer = new QSpacerItem(20, 135, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 2, 1, 1);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(widget_3);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        gridLayout_3->addWidget(doubleSpinBox, 3, 2, 1, 2);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 4, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(widget_3);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        gridLayout_3->addWidget(doubleSpinBox_2, 4, 2, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 5, 1, 1, 1);

        label_11 = new QLabel(widget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 6, 0, 1, 4);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 7, 0, 1, 4);

        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 8, 0, 1, 4);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_4, 9, 1, 1, 1);

        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 10, 0, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_2, 11, 3, 1, 1);


        horizontalLayout_4->addWidget(widget_3);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        widget_4 = new QWidget(stackedWidgetPage2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        scrollArea = new QScrollArea(widget_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMaximumSize(QSize(300, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 90, 418));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        horizontalLayout_4->addWidget(widget_4);

        textBrowser_3 = new QTextBrowser(stackedWidgetPage2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(textBrowser_3);

        stackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QString::fromUtf8("stackedWidgetPage3"));
        horizontalLayout_5 = new QHBoxLayout(stackedWidgetPage3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widget_5 = new QWidget(stackedWidgetPage3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(350, 0));
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_12 = new QLabel(widget_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        comboBox = new QComboBox(widget_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_4->addWidget(comboBox, 0, 1, 1, 2);

        label_13 = new QLabel(widget_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(widget_5);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 1, 1, 1, 2);

        label_14 = new QLabel(widget_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 2, 0, 1, 2);

        comboBox_3 = new QComboBox(widget_5);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_4->addWidget(comboBox_3, 2, 2, 1, 1);

        pushButton_6 = new QPushButton(widget_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_4->addWidget(pushButton_6, 3, 0, 1, 3);


        horizontalLayout_5->addWidget(widget_5);

        horizontalSpacer_6 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        textBrowser_4 = new QTextBrowser(stackedWidgetPage3);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        horizontalLayout_5->addWidget(textBrowser_4);

        stackedWidget->addWidget(stackedWidgetPage3);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(SubwayControlWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SubwayControlWindow);
    } // setupUi

    void retranslateUi(QWidget *SubwayControlWindow)
    {
        SubwayControlWindow->setWindowTitle(QCoreApplication::translate("SubwayControlWindow", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("SubwayControlWindow", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        label->setText(QCoreApplication::translate("SubwayControlWindow", "\350\276\223\345\205\245\345\220\215\347\247\260", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("SubwayControlWindow", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("SubwayControlWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\346\267\273\345\212\240\345\234\260\351\223\201\347\272\277\350\267\257\346\255\245\351\252\244\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">1\343\200\201\350\276\223\345\205\245\347\272\277\350\267\257\345\220\215\347\247\260"
                        "\357\274\214\351\200\211\346\213\251\347\272\277\350\267\257\351\242\234\350\211\262</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">2\343\200\201\347\202\271\345\207\273\347\241\256\350\256\244\346\267\273\345\212\240\345\256\214\346\210\220\347\272\277\350\267\257\347\232\204\346\267\273\345\212\240</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">3\343\200\201\351\234\200\350\246\201\346\263\250\346\204\217\347\272\277\350\267\257\345\220\215\347\247\260\344\270\215\350\203\275\344\270\216\345\267\262\346\234\211\347\272\277\350\267\257\351\207\215\345\244\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">4\343\200\201\346\267\273\345\212\240\345\256"
                        "\214\346\210\220\345\220\216\357\274\214\345\234\250\346\267\273\345\212\240\347\253\231\347\202\271\343\200\201\346\267\273\345\212\240\350\277\236\346\216\245\345\212\237\350\203\275\344\270\255\345\217\257\344\273\245\345\257\271\346\226\260\347\272\277\350\267\257\350\277\233\350\241\214\346\223\215\344\275\234</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("SubwayControlWindow", "\350\276\223\345\205\245\345\220\215\347\247\260", nullptr));
        label_6->setText(QCoreApplication::translate("SubwayControlWindow", "\347\273\217\345\272\246", nullptr));
        label_7->setText(QCoreApplication::translate("SubwayControlWindow", "\347\272\254\345\272\246", nullptr));
        label_11->setText(QCoreApplication::translate("SubwayControlWindow", "\346\263\250\346\204\217\347\273\217\345\272\246\345\222\214\347\272\254\345\272\246\347\232\204\350\214\203\345\233\264\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("SubwayControlWindow", "\347\273\217\345\272\246\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("SubwayControlWindow", "\347\272\254\345\272\246\357\274\232", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SubwayControlWindow", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        label_9->setText(QCoreApplication::translate("SubwayControlWindow", "\351\200\211\346\213\251\346\211\200\345\261\236\347\272\277\350\267\257", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("SubwayControlWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\267\273\345\212\240\347\253\231\347\202\271\347\232\204\346\255\245\351\252\244\357\274\232</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1\343\200\201\350\276\223\345\205\245\345\234\260\351\223\201\347\253\231\347\202\271\345\220\215\347\247\260\357\274\214\346\263\250\346\204\217\344\270\215\350\203\275\345\222\214\345"
                        "\267\262\346\234\211\347\253\231\347\202\271\351\207\215\345\220\215</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201\351\200\211\346\213\251\347\273\217\345\272\246\345\222\214\347\272\254\345\272\246\357\274\214\351\234\200\350\246\201\346\263\250\346\204\217\344\270\215\350\203\275\350\266\205\350\277\207\347\233\270\345\272\224\347\232\204\350\214\203\345\233\264</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3\343\200\201\347\202\271\345\207\273\347\241\256\350\256\244\346\267\273\345\212\240\346\214\211\351\222\256\350\277\233\350\241\214\346\267\273\345\212\240</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4\343\200\201\347\253\231\347\202\271\346\211\200\345\261\236\347\272\277\350\267\257\343\200\201\347\233\270\351\202\273\347\253\231\347\202\271"
                        "\347\255\211\344\277\241\346\201\257\345\234\250\346\267\273\345\212\240\350\277\236\346\216\245\345\212\237\350\203\275\344\270\255\350\277\233\350\241\214\346\267\273\345\212\240</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("SubwayControlWindow", "\347\253\231\347\202\2711", nullptr));
        label_13->setText(QCoreApplication::translate("SubwayControlWindow", "\347\253\231\347\202\2712", nullptr));
        label_14->setText(QCoreApplication::translate("SubwayControlWindow", "\350\277\236\346\216\245\346\211\200\345\261\236\347\272\277\350\267\257", nullptr));
        pushButton_6->setText(QCoreApplication::translate("SubwayControlWindow", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("SubwayControlWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\267\273\345\212\240\350\277\236\346\216\245\347\232\204\346\255\245\351\252\244\357\274\232</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1\343\200\201\351\200\211\346\213\251\350\246\201\346\267\273\345\212\240\350\277\236\346\216\245\347\232\204\344\270\244\344\270\252\347\253\231\347\202\271\357\274\210\345\205\210\345"
                        "\220\216\351\241\272\345\272\217\344\270\215\351\231\220\357\274\211</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201\351\200\211\346\213\251\350\277\236\346\216\245\346\211\200\345\261\236\347\232\204\347\272\277\350\267\257</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3\343\200\201\347\202\271\345\207\273\347\241\256\350\256\244\346\267\273\345\212\240</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubwayControlWindow: public Ui_SubwayControlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWAYCONTROLWINDOW_H
