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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *Tree;
    QTableWidget *Vector;
    QTextEdit *textEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *Counter;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AddCell;
    QPushButton *AddToTree;
    QPushButton *Clear;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(550, 512);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #789CB3;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Tree = new QTableWidget(centralwidget);
        Tree->setObjectName(QString::fromUtf8("Tree"));
        Tree->setGeometry(QRect(290, 220, 241, 241));
        Tree->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 500 9pt \"Small Fonts\";\n"
"border-radius: 5px;"));
        Vector = new QTableWidget(centralwidget);
        Vector->setObjectName(QString::fromUtf8("Vector"));
        Vector->setGeometry(QRect(10, 10, 521, 171));
        Vector->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 500 9pt \"Small Fonts\";\n"
"border-radius: 5px;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 250, 261, 181));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 500 9pt \"Small Fonts\";\n"
"border-radius: 5px;"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 440, 201, 21));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Small Fonts\";"));

        horizontalLayout->addWidget(label);

        Counter = new QLabel(widget);
        Counter->setObjectName(QString::fromUtf8("Counter"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(false);
        Counter->setFont(font1);
        Counter->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Small Fonts\";"));

        horizontalLayout->addWidget(Counter);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(9, 190, 521, 20));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        AddCell = new QPushButton(widget1);
        AddCell->setObjectName(QString::fromUtf8("AddCell"));
        AddCell->setStyleSheet(QString::fromUtf8("background-color: #FFFED1;\n"
"font: 500 9pt \"Small Fonts\";\n"
""));

        horizontalLayout_2->addWidget(AddCell);

        AddToTree = new QPushButton(widget1);
        AddToTree->setObjectName(QString::fromUtf8("AddToTree"));
        AddToTree->setStyleSheet(QString::fromUtf8("background-color: #FFFED1;\n"
"font: 500 9pt \"Small Fonts\";\n"
""));

        horizontalLayout_2->addWidget(AddToTree);

        Clear = new QPushButton(widget1);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setStyleSheet(QString::fromUtf8("background-color: #B36F6F;\n"
"font: 700 9pt \"Small Fonts\";\n"
""));

        horizontalLayout_2->addWidget(Clear);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(290, 470, 241, 24));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_3->addWidget(comboBox);

        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #B36F6F;\n"
"font: 700 9pt \"Small Fonts\";\n"
""));

        horizontalLayout_3->addWidget(pushButton);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 220, 261, 22));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(widget3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(spinBox);

        pushButton_3 = new QPushButton(widget3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #FFB8B8;\n"
"font: 500 9pt \"Small Fonts\";\n"
""));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #FFB8B8;\n"
"font: 500 9pt \"Small Fonts\";\n"
""));

        horizontalLayout_4->addWidget(pushButton_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Leaves counter :", nullptr));
        Counter->setText(QString());
        AddCell->setText(QCoreApplication::translate("MainWindow", "add data", nullptr));
        AddToTree->setText(QCoreApplication::translate("MainWindow", "add to the tree", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "get ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "search by key", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "delete by key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
