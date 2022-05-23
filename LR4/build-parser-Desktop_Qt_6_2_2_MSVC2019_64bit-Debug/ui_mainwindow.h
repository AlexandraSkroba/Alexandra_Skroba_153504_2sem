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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButtonFile;
    QPushButton *pushButtonLine;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QTextBrowser *textBrowser;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1308, 806);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #fc75ff;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(8, 9, 701, 511));
        QFont font;
        font.setPointSize(12);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: #d9b9e0;"));
        pushButtonFile = new QPushButton(centralwidget);
        pushButtonFile->setObjectName(QString::fromUtf8("pushButtonFile"));
        pushButtonFile->setGeometry(QRect(10, 540, 391, 71));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonFile->sizePolicy().hasHeightForWidth());
        pushButtonFile->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(48);
        pushButtonFile->setFont(font1);
        pushButtonFile->setStyleSheet(QString::fromUtf8("background-color: #d9b9e0;"));
        pushButtonLine = new QPushButton(centralwidget);
        pushButtonLine->setObjectName(QString::fromUtf8("pushButtonLine"));
        pushButtonLine->setGeometry(QRect(430, 540, 831, 221));
        sizePolicy.setHeightForWidth(pushButtonLine->sizePolicy().hasHeightForWidth());
        pushButtonLine->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(36);
        pushButtonLine->setFont(font2);
        pushButtonLine->setStyleSheet(QString::fromUtf8("background-color: #d9b9e0;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(730, 10, 541, 511));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: #d9b9e0;"));

        verticalLayout->addWidget(comboBox);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font3;
        font3.setPointSize(16);
        textBrowser->setFont(font3);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: #d9b9e0;"));

        verticalLayout->addWidget(textBrowser);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonFile->setText(QCoreApplication::translate("MainWindow", "\320\236\320\242\320\232\320\240\320\253\320\242\320\254 \320\244\320\220\320\231\320\233", nullptr));
        pushButtonLine->setText(QCoreApplication::translate("MainWindow", "\320\235\320\220\320\247\320\220\320\242\320\254 \320\237\320\220\320\240\320\241\320\225\320\235\320\230\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
