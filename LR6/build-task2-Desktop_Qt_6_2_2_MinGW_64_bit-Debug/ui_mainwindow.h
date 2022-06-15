/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *show_list;
    QTextEdit *deploy_text;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *key_le;
    QPushButton *add;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *key_to_deploy;
    QPushButton *deploy;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(369, 360);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #9EDAFF;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        show_list = new QTextEdit(centralwidget);
        show_list->setObjectName(QString::fromUtf8("show_list"));
        show_list->setGeometry(QRect(10, 10, 141, 321));
        show_list->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 500 9pt \"Small Fonts\";\n"
"border-radius: 5px;"));
        deploy_text = new QTextEdit(centralwidget);
        deploy_text->setObjectName(QString::fromUtf8("deploy_text"));
        deploy_text->setGeometry(QRect(170, 240, 181, 81));
        deploy_text->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 500 9pt \"Small Fonts\";\n"
"border-radius: 5px;"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 100, 161, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(180, 209, 161, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 20, 181, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 600 9pt \"Small Fonts\";\n"
""));

        horizontalLayout->addWidget(label);

        key_le = new QLineEdit(layoutWidget);
        key_le->setObjectName(QString::fromUtf8("key_le"));
        key_le->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 500 9pt \"Small Fonts\";\n"
""));

        horizontalLayout->addWidget(key_le);


        verticalLayout->addLayout(horizontalLayout);

        add = new QPushButton(layoutWidget);
        add->setObjectName(QString::fromUtf8("add"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        add->setFont(font1);
        add->setStyleSheet(QString::fromUtf8("background-color: #FFFED1;\n"
"font: 600 11pt \"Small Fonts\";\n"
""));

        verticalLayout->addWidget(add);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 130, 181, 75));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 600 9pt \"Small Fonts\";\n"
""));

        horizontalLayout_2->addWidget(label_2);

        key_to_deploy = new QLineEdit(layoutWidget1);
        key_to_deploy->setObjectName(QString::fromUtf8("key_to_deploy"));
        key_to_deploy->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 500 9pt \"Small Fonts\";\n"
""));

        horizontalLayout_2->addWidget(key_to_deploy);


        verticalLayout_2->addLayout(horizontalLayout_2);

        deploy = new QPushButton(layoutWidget1);
        deploy->setObjectName(QString::fromUtf8("deploy"));
        deploy->setFont(font1);
        deploy->setStyleSheet(QString::fromUtf8("background-color: #FFFED1;\n"
"font: 600 11pt \"Small Fonts\";\n"
""));

        verticalLayout_2->addWidget(deploy);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 369, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Key:", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Key:", nullptr));
        deploy->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
