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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QComboBox *comboBox;
    QPushButton *Open;
    QTextEdit *textEdit;
    QSpinBox *NewSize;
    QSpinBox *Value;
    QLabel *label;
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
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 60, 111, 31));
        Open = new QPushButton(centralwidget);
        Open->setObjectName(QString::fromUtf8("Open"));
        Open->setGeometry(QRect(190, 60, 91, 31));
        Open->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"border-radius:5px;\n"
"font: 700 13pt \"Small Fonts\";\n"
""));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(420, 50, 131, 271));
        NewSize = new QSpinBox(centralwidget);
        NewSize->setObjectName(QString::fromUtf8("NewSize"));
        NewSize->setGeometry(QRect(190, 140, 61, 31));
        NewSize->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        Value = new QSpinBox(centralwidget);
        Value->setObjectName(QString::fromUtf8("Value"));
        Value->setGeometry(QRect(260, 140, 61, 31));
        Value->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 100, 191, 41));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 600 12pt \"Segoe UI Semibold\";"));
        Close = new QPushButton(centralwidget);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(30, 330, 101, 41));
        Close->setStyleSheet(QString::fromUtf8("font: 700 13pt \"Small Fonts\";\n"
"border-radius:5px;\n"
"background-color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Open->setText(QCoreApplication::translate("MainWindow", "DO", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "For resize (new size, value)", nullptr));
        Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
