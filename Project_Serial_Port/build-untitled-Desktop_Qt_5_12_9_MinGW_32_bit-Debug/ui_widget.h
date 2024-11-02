/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_up;
    QGroupBox *groupBox_Rev;
    QGridLayout *gridLayout;
    QTextEdit *textEdit_Rev;
    QGroupBox *groupBox_Record;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_Record;
    QGroupBox *groupBox_MoreText;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_0;
    QLabel *label_Hex;
    QLabel *label_Str;
    QLabel *label_Send;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayoutl_9;
    QCheckBox *checkBox_3;
    QSpinBox *spinBox;
    QLabel *label;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_1;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_8;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_9;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_10;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton_10;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_11;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_11;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_12;
    QLineEdit *lineEdit_12;
    QPushButton *pushButton_12;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_13;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_13;
    QWidget *widget;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_btn;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_nowTime;
    QFrame *frame_all;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_1;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_01;
    QLabel *label_01;
    myCombobox *comboBox_01;
    QHBoxLayout *horizontalLayout_02;
    QLabel *label_02;
    QComboBox *comboBox_02;
    QHBoxLayout *horizontalLayout_03;
    QLabel *label_03;
    QComboBox *comboBox_03;
    QHBoxLayout *horizontalLayout_04;
    QLabel *label_04;
    QComboBox *comboBox_04;
    QHBoxLayout *horizontalLayout_05;
    QLabel *label_05;
    QComboBox *comboBox_05;
    QHBoxLayout *horizontalLayout_06;
    QLabel *label_7;
    QComboBox *comboBox_06;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QPushButton *btn_CloseOrOpenSerial;
    QPushButton *pushButton_7;
    QPushButton *pushButton_14;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QFrame *frame_3;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *checkBox_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_14;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_15;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkBox_16;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_19;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(648, 600);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 631, 581));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_up = new QHBoxLayout();
        horizontalLayout_up->setObjectName(QString::fromUtf8("horizontalLayout_up"));
        groupBox_Rev = new QGroupBox(layoutWidget);
        groupBox_Rev->setObjectName(QString::fromUtf8("groupBox_Rev"));
        gridLayout = new QGridLayout(groupBox_Rev);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit_Rev = new QTextEdit(groupBox_Rev);
        textEdit_Rev->setObjectName(QString::fromUtf8("textEdit_Rev"));
        textEdit_Rev->setLineWrapMode(QTextEdit::WidgetWidth);

        gridLayout->addWidget(textEdit_Rev, 0, 0, 1, 1);


        horizontalLayout_up->addWidget(groupBox_Rev);

        groupBox_Record = new QGroupBox(layoutWidget);
        groupBox_Record->setObjectName(QString::fromUtf8("groupBox_Record"));
        gridLayout_2 = new QGridLayout(groupBox_Record);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit_Record = new QTextEdit(groupBox_Record);
        textEdit_Record->setObjectName(QString::fromUtf8("textEdit_Record"));

        gridLayout_2->addWidget(textEdit_Record, 0, 0, 1, 1);


        horizontalLayout_up->addWidget(groupBox_Record);

        groupBox_MoreText = new QGroupBox(layoutWidget);
        groupBox_MoreText->setObjectName(QString::fromUtf8("groupBox_MoreText"));
        layoutWidget_2 = new QWidget(groupBox_MoreText);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(12, 29, 158, 16));
        horizontalLayout_0 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_0->setSpacing(30);
        horizontalLayout_0->setObjectName(QString::fromUtf8("horizontalLayout_0"));
        horizontalLayout_0->setContentsMargins(0, 0, 0, 0);
        label_Hex = new QLabel(layoutWidget_2);
        label_Hex->setObjectName(QString::fromUtf8("label_Hex"));
        label_Hex->setMinimumSize(QSize(0, 0));
        label_Hex->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_0->addWidget(label_Hex);

        label_Str = new QLabel(layoutWidget_2);
        label_Str->setObjectName(QString::fromUtf8("label_Str"));
        label_Str->setMinimumSize(QSize(0, 0));
        label_Str->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_0->addWidget(label_Str);

        label_Send = new QLabel(layoutWidget_2);
        label_Send->setObjectName(QString::fromUtf8("label_Send"));
        label_Send->setMinimumSize(QSize(0, 0));
        label_Send->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_0->addWidget(label_Send);

        layoutWidget_3 = new QWidget(groupBox_MoreText);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 300, 139, 25));
        horizontalLayoutl_9 = new QHBoxLayout(layoutWidget_3);
        horizontalLayoutl_9->setObjectName(QString::fromUtf8("horizontalLayoutl_9"));
        horizontalLayoutl_9->setContentsMargins(0, 0, 0, 0);
        checkBox_3 = new QCheckBox(layoutWidget_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayoutl_9->addWidget(checkBox_3);

        spinBox = new QSpinBox(layoutWidget_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayoutl_9->addWidget(spinBox);

        label = new QLabel(layoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayoutl_9->addWidget(label);

        layoutWidget_4 = new QWidget(groupBox_MoreText);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 330, 254, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_10->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_10->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_10->addWidget(pushButton_5);

        layoutWidget_5 = new QWidget(groupBox_MoreText);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(12, 49, 161, 236));
        verticalLayout = new QVBoxLayout(layoutWidget_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        checkBox = new QCheckBox(layoutWidget_5);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_1->addWidget(checkBox);

        lineEdit = new QLineEdit(layoutWidget_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_1->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(30, 0));
        pushButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_1->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_2 = new QCheckBox(layoutWidget_5);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);

        lineEdit_2 = new QLineEdit(layoutWidget_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(layoutWidget_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(30, 0));
        pushButton_2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_8 = new QCheckBox(layoutWidget_5);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        horizontalLayout_3->addWidget(checkBox_8);

        lineEdit_8 = new QLineEdit(layoutWidget_5);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_3->addWidget(lineEdit_8);

        pushButton_8 = new QPushButton(layoutWidget_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(30, 0));
        pushButton_8->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(pushButton_8);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox_9 = new QCheckBox(layoutWidget_5);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        horizontalLayout_4->addWidget(checkBox_9);

        lineEdit_9 = new QLineEdit(layoutWidget_5);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        horizontalLayout_4->addWidget(lineEdit_9);

        pushButton_9 = new QPushButton(layoutWidget_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(30, 0));
        pushButton_9->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_4->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBox_10 = new QCheckBox(layoutWidget_5);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        horizontalLayout_5->addWidget(checkBox_10);

        lineEdit_10 = new QLineEdit(layoutWidget_5);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        horizontalLayout_5->addWidget(lineEdit_10);

        pushButton_10 = new QPushButton(layoutWidget_5);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(30, 0));
        pushButton_10->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(pushButton_10);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkBox_11 = new QCheckBox(layoutWidget_5);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));

        horizontalLayout_6->addWidget(checkBox_11);

        lineEdit_11 = new QLineEdit(layoutWidget_5);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));

        horizontalLayout_6->addWidget(lineEdit_11);

        pushButton_11 = new QPushButton(layoutWidget_5);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(30, 0));
        pushButton_11->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_6->addWidget(pushButton_11);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        checkBox_12 = new QCheckBox(layoutWidget_5);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));

        horizontalLayout_7->addWidget(checkBox_12);

        lineEdit_12 = new QLineEdit(layoutWidget_5);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));

        horizontalLayout_7->addWidget(lineEdit_12);

        pushButton_12 = new QPushButton(layoutWidget_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(30, 0));
        pushButton_12->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_7->addWidget(pushButton_12);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkBox_13 = new QCheckBox(layoutWidget_5);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));

        horizontalLayout_8->addWidget(checkBox_13);

        lineEdit_13 = new QLineEdit(layoutWidget_5);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        horizontalLayout_8->addWidget(lineEdit_13);

        pushButton_13 = new QPushButton(layoutWidget_5);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(30, 0));
        pushButton_13->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_8->addWidget(pushButton_13);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_up->addWidget(groupBox_MoreText);

        horizontalLayout_up->setStretch(0, 4);
        horizontalLayout_up->setStretch(1, 3);
        horizontalLayout_up->setStretch(2, 3);

        gridLayout_3->addLayout(horizontalLayout_up, 0, 0, 1, 1);

        widget = new QWidget(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 30));
        widget->setMaximumSize(QSize(16777215, 30));
        layoutWidget_6 = new QWidget(widget);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(163, 0, 451, 22));
        horizontalLayout_btn = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_btn->setObjectName(QString::fromUtf8("horizontalLayout_btn"));
        horizontalLayout_btn->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_5 = new QLabel(layoutWidget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_12->addWidget(label_5);

        label_4 = new QLabel(layoutWidget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_12->addWidget(label_4);

        label_3 = new QLabel(layoutWidget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_12->addWidget(label_3);


        horizontalLayout_btn->addLayout(horizontalLayout_12);

        label_nowTime = new QLabel(layoutWidget_6);
        label_nowTime->setObjectName(QString::fromUtf8("label_nowTime"));
        label_nowTime->setMinimumSize(QSize(130, 0));
        label_nowTime->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_btn->addWidget(label_nowTime);


        gridLayout_3->addWidget(widget, 2, 0, 1, 1);

        frame_all = new QFrame(layoutWidget);
        frame_all->setObjectName(QString::fromUtf8("frame_all"));
        frame_all->setMinimumSize(QSize(0, 170));
        frame_all->setFrameShape(QFrame::StyledPanel);
        frame_all->setFrameShadow(QFrame::Raised);
        layoutWidget_7 = new QWidget(frame_all);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 10, 611, 151));
        horizontalLayout = new QHBoxLayout(layoutWidget_7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_1 = new QFrame(layoutWidget_7);
        frame_1->setObjectName(QString::fromUtf8("frame_1"));
        frame_1->setMinimumSize(QSize(140, 0));
        frame_1->setMaximumSize(QSize(140, 16777215));
        frame_1->setFrameShape(QFrame::StyledPanel);
        frame_1->setFrameShadow(QFrame::Raised);
        layoutWidget_8 = new QWidget(frame_1);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(0, 0, 131, 176));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_01 = new QHBoxLayout();
        horizontalLayout_01->setObjectName(QString::fromUtf8("horizontalLayout_01"));
        label_01 = new QLabel(layoutWidget_8);
        label_01->setObjectName(QString::fromUtf8("label_01"));

        horizontalLayout_01->addWidget(label_01);

        comboBox_01 = new myCombobox(layoutWidget_8);
        comboBox_01->setObjectName(QString::fromUtf8("comboBox_01"));

        horizontalLayout_01->addWidget(comboBox_01);


        verticalLayout_3->addLayout(horizontalLayout_01);

        horizontalLayout_02 = new QHBoxLayout();
        horizontalLayout_02->setObjectName(QString::fromUtf8("horizontalLayout_02"));
        label_02 = new QLabel(layoutWidget_8);
        label_02->setObjectName(QString::fromUtf8("label_02"));

        horizontalLayout_02->addWidget(label_02);

        comboBox_02 = new QComboBox(layoutWidget_8);
        comboBox_02->addItem(QString());
        comboBox_02->addItem(QString());
        comboBox_02->addItem(QString());
        comboBox_02->addItem(QString());
        comboBox_02->addItem(QString());
        comboBox_02->addItem(QString());
        comboBox_02->addItem(QString());
        comboBox_02->addItem(QString());
        comboBox_02->addItem(QString());
        comboBox_02->addItem(QString());
        comboBox_02->setObjectName(QString::fromUtf8("comboBox_02"));

        horizontalLayout_02->addWidget(comboBox_02);


        verticalLayout_3->addLayout(horizontalLayout_02);

        horizontalLayout_03 = new QHBoxLayout();
        horizontalLayout_03->setObjectName(QString::fromUtf8("horizontalLayout_03"));
        label_03 = new QLabel(layoutWidget_8);
        label_03->setObjectName(QString::fromUtf8("label_03"));

        horizontalLayout_03->addWidget(label_03);

        comboBox_03 = new QComboBox(layoutWidget_8);
        comboBox_03->addItem(QString());
        comboBox_03->addItem(QString());
        comboBox_03->setObjectName(QString::fromUtf8("comboBox_03"));

        horizontalLayout_03->addWidget(comboBox_03);


        verticalLayout_3->addLayout(horizontalLayout_03);

        horizontalLayout_04 = new QHBoxLayout();
        horizontalLayout_04->setObjectName(QString::fromUtf8("horizontalLayout_04"));
        label_04 = new QLabel(layoutWidget_8);
        label_04->setObjectName(QString::fromUtf8("label_04"));

        horizontalLayout_04->addWidget(label_04);

        comboBox_04 = new QComboBox(layoutWidget_8);
        comboBox_04->addItem(QString());
        comboBox_04->addItem(QString());
        comboBox_04->addItem(QString());
        comboBox_04->addItem(QString());
        comboBox_04->addItem(QString());
        comboBox_04->setObjectName(QString::fromUtf8("comboBox_04"));

        horizontalLayout_04->addWidget(comboBox_04);


        verticalLayout_3->addLayout(horizontalLayout_04);

        horizontalLayout_05 = new QHBoxLayout();
        horizontalLayout_05->setSpacing(6);
        horizontalLayout_05->setObjectName(QString::fromUtf8("horizontalLayout_05"));
        label_05 = new QLabel(layoutWidget_8);
        label_05->setObjectName(QString::fromUtf8("label_05"));

        horizontalLayout_05->addWidget(label_05);

        comboBox_05 = new QComboBox(layoutWidget_8);
        comboBox_05->addItem(QString());
        comboBox_05->addItem(QString());
        comboBox_05->addItem(QString());
        comboBox_05->setObjectName(QString::fromUtf8("comboBox_05"));
        comboBox_05->setMinimumSize(QSize(60, 0));
        comboBox_05->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_05->addWidget(comboBox_05);


        verticalLayout_3->addLayout(horizontalLayout_05);

        horizontalLayout_06 = new QHBoxLayout();
        horizontalLayout_06->setObjectName(QString::fromUtf8("horizontalLayout_06"));
        label_7 = new QLabel(layoutWidget_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_06->addWidget(label_7);

        comboBox_06 = new QComboBox(layoutWidget_8);
        comboBox_06->addItem(QString());
        comboBox_06->addItem(QString());
        comboBox_06->addItem(QString());
        comboBox_06->setObjectName(QString::fromUtf8("comboBox_06"));
        comboBox_06->setMinimumSize(QSize(60, 0));
        comboBox_06->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_06->addWidget(comboBox_06);


        verticalLayout_3->addLayout(horizontalLayout_06);


        horizontalLayout->addWidget(frame_1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(layoutWidget_7);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        btn_CloseOrOpenSerial = new QPushButton(frame_2);
        btn_CloseOrOpenSerial->setObjectName(QString::fromUtf8("btn_CloseOrOpenSerial"));
        btn_CloseOrOpenSerial->setGeometry(QRect(10, 10, 51, 41));
        pushButton_7 = new QPushButton(frame_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(70, 10, 61, 21));
        pushButton_14 = new QPushButton(frame_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(70, 30, 61, 21));
        checkBox_4 = new QCheckBox(frame_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(140, 10, 71, 18));
        checkBox_5 = new QCheckBox(frame_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(210, 10, 73, 18));
        checkBox_6 = new QCheckBox(frame_2);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(210, 30, 71, 18));
        pushButton_15 = new QPushButton(frame_2);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(290, 10, 51, 21));
        pushButton_16 = new QPushButton(frame_2);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setEnabled(true);
        pushButton_16->setGeometry(QRect(350, 10, 51, 21));
        pushButton_17 = new QPushButton(frame_2);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(290, 30, 51, 21));
        pushButton_18 = new QPushButton(frame_2);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(350, 30, 51, 21));

        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(layoutWidget_7);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget_9 = new QWidget(frame_3);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 0, 411, 41));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        checkBox_7 = new QCheckBox(layoutWidget_9);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        horizontalLayout_9->addWidget(checkBox_7);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lineEdit_3 = new QLineEdit(layoutWidget_9);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(50, 0));
        lineEdit_3->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_11->addWidget(lineEdit_3);

        label_2 = new QLabel(layoutWidget_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_11->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);


        horizontalLayout_9->addLayout(horizontalLayout_11);

        checkBox_14 = new QCheckBox(layoutWidget_9);
        checkBox_14->setObjectName(QString::fromUtf8("checkBox_14"));

        horizontalLayout_9->addWidget(checkBox_14);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        checkBox_15 = new QCheckBox(layoutWidget_9);
        checkBox_15->setObjectName(QString::fromUtf8("checkBox_15"));

        horizontalLayout_9->addWidget(checkBox_15);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        checkBox_16 = new QCheckBox(layoutWidget_9);
        checkBox_16->setObjectName(QString::fromUtf8("checkBox_16"));

        horizontalLayout_9->addWidget(checkBox_16);

        horizontalSpacer_6 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        pushButton_19 = new QPushButton(frame_3);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(10, 40, 51, 31));
        lineEdit_4 = new QLineEdit(frame_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(60, 40, 391, 31));

        verticalLayout_2->addWidget(frame_3);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_3->addWidget(frame_all, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox_Rev->setTitle(QApplication::translate("Widget", "\346\216\245\345\217\227", nullptr));
        groupBox_Record->setTitle(QApplication::translate("Widget", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        textEdit_Record->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Thanks for using!</p></body></html>", nullptr));
        groupBox_MoreText->setTitle(QApplication::translate("Widget", "\345\244\232\346\226\207\346\234\254", nullptr));
        label_Hex->setText(QApplication::translate("Widget", " Hex", nullptr));
        label_Str->setText(QApplication::translate("Widget", " \345\255\227\347\254\246\344\270\262", nullptr));
        label_Send->setText(QApplication::translate("Widget", " \345\217\221\351\200\201", nullptr));
        checkBox_3->setText(QApplication::translate("Widget", "\345\276\252\347\216\257\345\217\221\351\200\201", nullptr));
        label->setText(QApplication::translate("Widget", "ms", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        pushButton_4->setText(QApplication::translate("Widget", "\350\275\275\345\205\245", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "\351\207\215\347\275\256", nullptr));
        checkBox->setText(QString());
        pushButton->setText(QApplication::translate("Widget", "1", nullptr));
        checkBox_2->setText(QString());
        pushButton_2->setText(QApplication::translate("Widget", "2", nullptr));
        checkBox_8->setText(QString());
        pushButton_8->setText(QApplication::translate("Widget", "3", nullptr));
        checkBox_9->setText(QString());
        pushButton_9->setText(QApplication::translate("Widget", "4", nullptr));
        checkBox_10->setText(QString());
        pushButton_10->setText(QApplication::translate("Widget", "5", nullptr));
        checkBox_11->setText(QString());
        pushButton_11->setText(QApplication::translate("Widget", "6", nullptr));
        checkBox_12->setText(QString());
        pushButton_12->setText(QApplication::translate("Widget", "7", nullptr));
        checkBox_13->setText(QString());
        pushButton_13->setText(QApplication::translate("Widget", "8", nullptr));
        label_5->setText(QApplication::translate("Widget", "Send OK!", nullptr));
        label_4->setText(QString());
        label_3->setText(QString());
        label_nowTime->setText(QApplication::translate("Widget", " 2024-01-01 00:00:00", nullptr));
        label_01->setText(QApplication::translate("Widget", "\344\270\262\345\217\243", nullptr));
        label_02->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_02->setItemText(0, QApplication::translate("Widget", "4800", nullptr));
        comboBox_02->setItemText(1, QApplication::translate("Widget", "9600", nullptr));
        comboBox_02->setItemText(2, QApplication::translate("Widget", "19200", nullptr));
        comboBox_02->setItemText(3, QApplication::translate("Widget", "38400", nullptr));
        comboBox_02->setItemText(4, QApplication::translate("Widget", "57600", nullptr));
        comboBox_02->setItemText(5, QApplication::translate("Widget", "74880", nullptr));
        comboBox_02->setItemText(6, QApplication::translate("Widget", "115200", nullptr));
        comboBox_02->setItemText(7, QApplication::translate("Widget", "230400", nullptr));
        comboBox_02->setItemText(8, QApplication::translate("Widget", "460800", nullptr));
        comboBox_02->setItemText(9, QApplication::translate("Widget", "576000", nullptr));

        label_03->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBox_03->setItemText(0, QApplication::translate("Widget", "7", nullptr));
        comboBox_03->setItemText(1, QApplication::translate("Widget", "8", nullptr));

        label_04->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        comboBox_04->setItemText(0, QApplication::translate("Widget", "None", nullptr));
        comboBox_04->setItemText(1, QApplication::translate("Widget", "Even", nullptr));
        comboBox_04->setItemText(2, QApplication::translate("Widget", "Mark", nullptr));
        comboBox_04->setItemText(3, QApplication::translate("Widget", "Odd", nullptr));
        comboBox_04->setItemText(4, QApplication::translate("Widget", "Space", nullptr));

        label_05->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBox_05->setItemText(0, QApplication::translate("Widget", "One", nullptr));
        comboBox_05->setItemText(1, QApplication::translate("Widget", "OnePointFive", nullptr));
        comboBox_05->setItemText(2, QApplication::translate("Widget", "Two", nullptr));

        label_7->setText(QApplication::translate("Widget", "\346\265\201\346\216\247", nullptr));
        comboBox_06->setItemText(0, QApplication::translate("Widget", "None", nullptr));
        comboBox_06->setItemText(1, QApplication::translate("Widget", "XOnXOff", nullptr));
        comboBox_06->setItemText(2, QApplication::translate("Widget", "RequestToSer", nullptr));

        btn_CloseOrOpenSerial->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_7->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\345\217\227", nullptr));
        pushButton_14->setText(QApplication::translate("Widget", "\344\277\235\345\255\230\346\216\245\345\217\227", nullptr));
        checkBox_4->setText(QApplication::translate("Widget", "\346\216\245\345\217\227\346\227\266\351\227\264", nullptr));
        checkBox_5->setText(QApplication::translate("Widget", "Hex\346\230\276\347\244\272", nullptr));
        checkBox_6->setText(QApplication::translate("Widget", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        pushButton_15->setText(QApplication::translate("Widget", "\350\277\220\350\241\214\346\250\241\345\274\217", nullptr));
        pushButton_16->setText(QApplication::translate("Widget", "\351\232\220\350\227\217\351\235\242\346\235\277", nullptr));
        pushButton_17->setText(QApplication::translate("Widget", "\344\270\213\350\275\275\346\250\241\345\274\217", nullptr));
        pushButton_18->setText(QApplication::translate("Widget", "\351\232\220\350\227\217\345\216\206\345\217\262", nullptr));
        checkBox_7->setText(QApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        lineEdit_3->setText(QApplication::translate("Widget", "1000", nullptr));
        label_2->setText(QApplication::translate("Widget", "ms/\346\254\241", nullptr));
        checkBox_14->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        checkBox_15->setText(QApplication::translate("Widget", "Hex\345\217\221\351\200\201", nullptr));
        checkBox_16->setText(QApplication::translate("Widget", "\346\240\274\345\274\217\350\276\223\345\205\245", nullptr));
        pushButton_19->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        lineEdit_4->setText(QApplication::translate("Widget", " Hello! This is Ms.Mi serialPort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
