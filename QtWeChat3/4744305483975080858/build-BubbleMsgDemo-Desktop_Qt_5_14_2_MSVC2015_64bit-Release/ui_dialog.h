/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "chatbubble.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    BubbleList *widget_bubble_show;
    QWidget *widgetMsg;
    QTextEdit *tedit_send_msg;
    QPushButton *btn_sendmsg;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(770, 693);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        widget_bubble_show = new BubbleList(Dialog);
        widget_bubble_show->setObjectName(QString::fromUtf8("widget_bubble_show"));
        widget_bubble_show->setGeometry(QRect(30, 20, 709, 501));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_bubble_show->sizePolicy().hasHeightForWidth());
        widget_bubble_show->setSizePolicy(sizePolicy1);
        widget_bubble_show->setMinimumSize(QSize(0, 0));
        widget_bubble_show->setMouseTracking(true);
        widgetMsg = new QWidget(Dialog);
        widgetMsg->setObjectName(QString::fromUtf8("widgetMsg"));
        widgetMsg->setGeometry(QRect(30, 520, 709, 181));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetMsg->sizePolicy().hasHeightForWidth());
        widgetMsg->setSizePolicy(sizePolicy2);
        widgetMsg->setMinimumSize(QSize(709, 181));
        tedit_send_msg = new QTextEdit(widgetMsg);
        tedit_send_msg->setObjectName(QString::fromUtf8("tedit_send_msg"));
        tedit_send_msg->setGeometry(QRect(0, 0, 711, 151));
        sizePolicy1.setHeightForWidth(tedit_send_msg->sizePolicy().hasHeightForWidth());
        tedit_send_msg->setSizePolicy(sizePolicy1);
        btn_sendmsg = new QPushButton(widgetMsg);
        btn_sendmsg->setObjectName(QString::fromUtf8("btn_sendmsg"));
        btn_sendmsg->setGeometry(QRect(600, 150, 91, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btn_sendmsg->setText(QCoreApplication::translate("Dialog", "\345\217\221\351\200\201(&S)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
