/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *line;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_4;
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_12;
    QPushButton *pushButton_9;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(370, 231);
        Widget->setStyleSheet(QString::fromUtf8("background-color: #9BD492;"));
        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 70, 351, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 341, 42));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("System")});
        font.setPointSize(30);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 700 30pt \"System\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Serif")});
        font1.setPointSize(20);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 5px;"));

        horizontalLayout_5->addWidget(label_2);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 90, 351, 131));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox_4 = new QSpinBox(widget1);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox_4->sizePolicy().hasHeightForWidth());
        spinBox_4->setSizePolicy(sizePolicy1);
        spinBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"Small Fonts\";"));

        horizontalLayout->addWidget(spinBox_4);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";\n"
""));

        horizontalLayout->addWidget(pushButton);

        pushButton_8 = new QPushButton(widget1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(widget1);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout->addWidget(pushButton_7);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinBox_2 = new QSpinBox(widget1);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        sizePolicy1.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy1);
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"Small Fonts\";"));

        horizontalLayout_2->addWidget(spinBox_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_10 = new QPushButton(widget1);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy3);
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout_2->addWidget(pushButton_10);

        pushButton_6 = new QPushButton(widget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinBox_3 = new QSpinBox(widget1);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        sizePolicy1.setHeightForWidth(spinBox_3->sizePolicy().hasHeightForWidth());
        spinBox_3->setSizePolicy(sizePolicy1);
        spinBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"Small Fonts\";"));

        horizontalLayout_3->addWidget(spinBox_3);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_11 = new QPushButton(widget1);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy3.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy3);
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout_3->addWidget(pushButton_11);

        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        spinBox_5 = new QSpinBox(widget1);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        sizePolicy1.setHeightForWidth(spinBox_5->sizePolicy().hasHeightForWidth());
        spinBox_5->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Small Fonts")});
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(false);
        spinBox_5->setFont(font2);
        spinBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"Small Fonts\";"));

        horizontalLayout_4->addWidget(spinBox_5);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_12 = new QPushButton(widget1);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy3.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy3);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout_4->addWidget(pushButton_12);

        pushButton_9 = new QPushButton(widget1);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 242, 170);\n"
"font: 13pt \"MS Serif\";"));

        horizontalLayout_4->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Bitset :    ", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("Widget", "all", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "size", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "set", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "none", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "to_string", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "reset", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "any", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "to_ullong", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "flip", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "count", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Widget", "to_ulong", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
