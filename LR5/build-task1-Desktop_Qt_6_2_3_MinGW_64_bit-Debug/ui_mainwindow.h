/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QComboBox *comboBox;
    QTextEdit *queue1;
    QTextEdit *queue2;
    QPushButton *Do;
    QPushButton *Task;
    QPushButton *Close;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 600, 400));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 40, 111, 22));
        queue1 = new QTextEdit(centralwidget);
        queue1->setObjectName(QString::fromUtf8("queue1"));
        queue1->setGeometry(QRect(300, 30, 104, 201));
        queue2 = new QTextEdit(centralwidget);
        queue2->setObjectName(QString::fromUtf8("queue2"));
        queue2->setGeometry(QRect(460, 30, 104, 201));
        Do = new QPushButton(centralwidget);
        Do->setObjectName(QString::fromUtf8("Do"));
        Do->setGeometry(QRect(180, 40, 71, 31));
        Do->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"font: 700 13pt \"Small Fonts\";\n"
"background-color: rgb(0, 0, 255);\n"
"color:rgb(255, 255, 255);"));
        Task = new QPushButton(centralwidget);
        Task->setObjectName(QString::fromUtf8("Task"));
        Task->setGeometry(QRect(470, 330, 101, 41));
        Task->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 13pt \"Small Fonts\";\n"
""));
        Close = new QPushButton(centralwidget);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(30, 330, 101, 41));
        Close->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 13pt \"Small Fonts\";\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Do->setText(QCoreApplication::translate("MainWindow", "DO", nullptr));
        Task->setText(QCoreApplication::translate("MainWindow", "Task", nullptr));
        Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
