/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QTextEdit *mainQueue;
    QTextEdit *subQ1;
    QTextEdit *subQ2;
    QPushButton *FullFill;
    QPushButton *Open;
    QPushButton *Close;

    void setupUi(QMainWindow *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName(QString::fromUtf8("Application"));
        Application->resize(600, 400);
        centralwidget = new QWidget(Application);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 600, 400));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);"));
        mainQueue = new QTextEdit(centralwidget);
        mainQueue->setObjectName(QString::fromUtf8("mainQueue"));
        mainQueue->setGeometry(QRect(200, 10, 100, 230));
        mainQueue->setStyleSheet(QString::fromUtf8(""));
        subQ1 = new QTextEdit(centralwidget);
        subQ1->setObjectName(QString::fromUtf8("subQ1"));
        subQ1->setGeometry(QRect(50, 150, 100, 230));
        subQ2 = new QTextEdit(centralwidget);
        subQ2->setObjectName(QString::fromUtf8("subQ2"));
        subQ2->setGeometry(QRect(350, 150, 100, 230));
        FullFill = new QPushButton(centralwidget);
        FullFill->setObjectName(QString::fromUtf8("FullFill"));
        FullFill->setGeometry(QRect(480, 50, 101, 41));
        FullFill->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 13pt \"Small Fonts\";\n"
"border-radius:5px;\n"
""));
        Open = new QPushButton(centralwidget);
        Open->setObjectName(QString::fromUtf8("Open"));
        Open->setGeometry(QRect(480, 110, 101, 41));
        Open->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 13pt \"Small Fonts\";\n"
"border-radius:5px;\n"
""));
        Close = new QPushButton(centralwidget);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(480, 330, 101, 41));
        Close->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 13pt \"Small Fonts\";\n"
""));
        Application->setCentralWidget(centralwidget);

        retranslateUi(Application);

        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QMainWindow *Application)
    {
        Application->setWindowTitle(QCoreApplication::translate("Application", "MainWindow", nullptr));
        FullFill->setText(QCoreApplication::translate("Application", "FULL FILL", nullptr));
        Open->setText(QCoreApplication::translate("Application", "SORT", nullptr));
        Close->setText(QCoreApplication::translate("Application", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
