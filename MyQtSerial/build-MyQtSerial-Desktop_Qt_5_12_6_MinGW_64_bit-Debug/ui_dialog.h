/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *CboxSerialPort;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *CboxBaudRate;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *CboxStopBits;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *CboxDataBits;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *CboxParity;
    QSpacerItem *verticalSpacer_6;
    QPushButton *BtnOpenSerial;
    QSpacerItem *verticalSpacer_7;
    QPushButton *BtnSendData;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QTextBrowser *textBrowser;
    QLabel *label_7;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(692, 463);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 21, 651, 411));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(13, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        CboxSerialPort = new QComboBox(layoutWidget);
        CboxSerialPort->setObjectName(QString::fromUtf8("CboxSerialPort"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CboxSerialPort->sizePolicy().hasHeightForWidth());
        CboxSerialPort->setSizePolicy(sizePolicy2);
        CboxSerialPort->setFont(font);

        horizontalLayout->addWidget(CboxSerialPort);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        CboxBaudRate = new QComboBox(layoutWidget);
        CboxBaudRate->addItem(QString());
        CboxBaudRate->addItem(QString());
        CboxBaudRate->addItem(QString());
        CboxBaudRate->setObjectName(QString::fromUtf8("CboxBaudRate"));
        sizePolicy2.setHeightForWidth(CboxBaudRate->sizePolicy().hasHeightForWidth());
        CboxBaudRate->setSizePolicy(sizePolicy2);
        CboxBaudRate->setFont(font);

        horizontalLayout_2->addWidget(CboxBaudRate);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        CboxStopBits = new QComboBox(layoutWidget);
        CboxStopBits->addItem(QString());
        CboxStopBits->addItem(QString());
        CboxStopBits->addItem(QString());
        CboxStopBits->setObjectName(QString::fromUtf8("CboxStopBits"));
        sizePolicy2.setHeightForWidth(CboxStopBits->sizePolicy().hasHeightForWidth());
        CboxStopBits->setSizePolicy(sizePolicy2);
        CboxStopBits->setFont(font);

        horizontalLayout_3->addWidget(CboxStopBits);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        CboxDataBits = new QComboBox(layoutWidget);
        CboxDataBits->addItem(QString());
        CboxDataBits->addItem(QString());
        CboxDataBits->addItem(QString());
        CboxDataBits->addItem(QString());
        CboxDataBits->setObjectName(QString::fromUtf8("CboxDataBits"));
        sizePolicy2.setHeightForWidth(CboxDataBits->sizePolicy().hasHeightForWidth());
        CboxDataBits->setSizePolicy(sizePolicy2);
        CboxDataBits->setFont(font);

        horizontalLayout_4->addWidget(CboxDataBits);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        CboxParity = new QComboBox(layoutWidget);
        CboxParity->addItem(QString());
        CboxParity->addItem(QString());
        CboxParity->addItem(QString());
        CboxParity->setObjectName(QString::fromUtf8("CboxParity"));
        sizePolicy2.setHeightForWidth(CboxParity->sizePolicy().hasHeightForWidth());
        CboxParity->setSizePolicy(sizePolicy2);
        CboxParity->setFont(font);

        horizontalLayout_5->addWidget(CboxParity);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        BtnOpenSerial = new QPushButton(layoutWidget);
        BtnOpenSerial->setObjectName(QString::fromUtf8("BtnOpenSerial"));
        BtnOpenSerial->setFont(font);

        verticalLayout_2->addWidget(BtnOpenSerial);

        verticalSpacer_7 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        BtnSendData = new QPushButton(layoutWidget);
        BtnSendData->setObjectName(QString::fromUtf8("BtnSendData"));
        BtnSendData->setFont(font);

        verticalLayout_2->addWidget(BtnSendData);

        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(6);
        sizePolicy3.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy3);
        textBrowser->setFont(font);

        verticalLayout->addWidget(textBrowser);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy4);
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);

        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(3, 2);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 8);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\344\270\212\344\275\215\346\234\272", nullptr));
        label->setText(QApplication::translate("Dialog", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_5->setText(QApplication::translate("Dialog", "\346\263\242\347\211\271\347\216\207", nullptr));
        CboxBaudRate->setItemText(0, QApplication::translate("Dialog", "9600", nullptr));
        CboxBaudRate->setItemText(1, QApplication::translate("Dialog", "19200", nullptr));
        CboxBaudRate->setItemText(2, QApplication::translate("Dialog", "115200", nullptr));

        label_2->setText(QApplication::translate("Dialog", "\345\201\234\346\255\242\344\275\215", nullptr));
        CboxStopBits->setItemText(0, QApplication::translate("Dialog", "1", nullptr));
        CboxStopBits->setItemText(1, QApplication::translate("Dialog", "1.5", nullptr));
        CboxStopBits->setItemText(2, QApplication::translate("Dialog", "2", nullptr));

        label_3->setText(QApplication::translate("Dialog", "\346\225\260\346\215\256\344\275\215", nullptr));
        CboxDataBits->setItemText(0, QApplication::translate("Dialog", "8", nullptr));
        CboxDataBits->setItemText(1, QApplication::translate("Dialog", "7", nullptr));
        CboxDataBits->setItemText(2, QApplication::translate("Dialog", "6", nullptr));
        CboxDataBits->setItemText(3, QApplication::translate("Dialog", "5", nullptr));

        label_4->setText(QApplication::translate("Dialog", "\346\240\241\351\252\214\344\275\215", nullptr));
        CboxParity->setItemText(0, QApplication::translate("Dialog", "\346\227\240", nullptr));
        CboxParity->setItemText(1, QApplication::translate("Dialog", "\345\245\207\346\240\241\351\252\214", nullptr));
        CboxParity->setItemText(2, QApplication::translate("Dialog", "\345\201\266\346\240\241\351\252\214", nullptr));

        BtnOpenSerial->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        BtnSendData->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        label_6->setText(QApplication::translate("Dialog", "\346\216\245\346\224\266\346\225\260\346\215\256", nullptr));
        label_7->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
