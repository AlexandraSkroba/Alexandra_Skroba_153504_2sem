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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *def;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *numA;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_12;
    QLineEdit *numB;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLineEdit *numC;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLineEdit *numD;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *numE;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_13;
    QLineEdit *answer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *opz;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(701, 178);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #E7E5D9;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 100, 101, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("font-weight: 650;\n"
"text-decoration: none;\n"
"border-radius: 10px;\n"
"background-color: #AE887B;\n"
"color:white;\n"
"box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"transition: 0.2s;\n"
""));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 685, 64));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label);

        def = new QLineEdit(layoutWidget);
        def->setObjectName(QString::fromUtf8("def"));
        def->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
" border-radius: 3px;\n"
"border: 1px solid gray;"));

        verticalLayout->addWidget(def);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(50, 16777215));
        label_8->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_8->addWidget(label_8);

        numA = new QLineEdit(layoutWidget);
        numA->setObjectName(QString::fromUtf8("numA"));
        numA->setMaximumSize(QSize(50, 16777215));
        numA->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
" border-radius: 3px;\n"
"border: 1px solid gray;\n"
""));

        verticalLayout_8->addWidget(numA);


        gridLayout->addLayout(verticalLayout_8, 0, 1, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(50, 16777215));
        label_12->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_12->addWidget(label_12);

        numB = new QLineEdit(layoutWidget);
        numB->setObjectName(QString::fromUtf8("numB"));
        numB->setMaximumSize(QSize(50, 16777215));
        numB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
" border-radius: 3px;\n"
"border: 1px solid gray;"));

        verticalLayout_12->addWidget(numB);


        gridLayout->addLayout(verticalLayout_12, 0, 2, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(50, 16777215));
        label_11->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_11->addWidget(label_11);

        numC = new QLineEdit(layoutWidget);
        numC->setObjectName(QString::fromUtf8("numC"));
        numC->setMaximumSize(QSize(50, 16777215));
        numC->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
" border-radius: 3px;\n"
"border: 1px solid gray;"));

        verticalLayout_11->addWidget(numC);


        gridLayout->addLayout(verticalLayout_11, 0, 3, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(50, 16777215));
        label_10->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_10->addWidget(label_10);

        numD = new QLineEdit(layoutWidget);
        numD->setObjectName(QString::fromUtf8("numD"));
        numD->setMaximumSize(QSize(50, 16777215));
        numD->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
" border-radius: 3px;\n"
"border: 1px solid gray;"));

        verticalLayout_10->addWidget(numD);


        gridLayout->addLayout(verticalLayout_10, 0, 4, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(50, 16777215));
        label_9->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_9->addWidget(label_9);

        numE = new QLineEdit(layoutWidget);
        numE->setObjectName(QString::fromUtf8("numE"));
        numE->setMaximumSize(QSize(50, 16777215));
        numE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
" border-radius: 3px;\n"
"border: 1px solid gray;"));

        verticalLayout_9->addWidget(numE);


        gridLayout->addLayout(verticalLayout_9, 0, 5, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(50, 0));
        label_13->setMaximumSize(QSize(200, 16777215));
        label_13->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_13->addWidget(label_13);

        answer = new QLineEdit(layoutWidget);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setEnabled(true);
        answer->setMinimumSize(QSize(100, 0));
        answer->setMaximumSize(QSize(16777215, 16777215));
        answer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
" border-radius: 3px;\n"
"border: 1px solid gray;"));
        answer->setReadOnly(true);

        verticalLayout_13->addWidget(answer);


        gridLayout->addLayout(verticalLayout_13, 0, 6, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_2);

        opz = new QLineEdit(layoutWidget);
        opz->setObjectName(QString::fromUtf8("opz"));
        opz->setMinimumSize(QSize(100, 0));
        opz->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
" border-radius: 3px;\n"
"border: 1px solid gray;"));
        opz->setReadOnly(true);

        verticalLayout_2->addWidget(opz);


        gridLayout->addLayout(verticalLayout_2, 0, 7, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 701, 17));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\213\321\207\320\275\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "    a", nullptr));
        numA->setInputMask(QString());
        numA->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "   b", nullptr));
        numB->setInputMask(QString());
        numB->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "   c", nullptr));
        numC->setInputMask(QString());
        numC->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "  d", nullptr));
        numD->setInputMask(QString());
        numD->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "   e", nullptr));
        numE->setInputMask(QString());
        numE->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\237\320\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
