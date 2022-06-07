/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *Button1;
    QLabel *Label1;
    QLabel *Label2;
    QLineEdit *Line1;
    QLineEdit *Line2;
    QLabel *Label;
    QLabel *LabelBack;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        Button1 = new QPushButton(Dialog);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(140, 230, 75, 23));
        Label1 = new QLabel(Dialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setGeometry(QRect(110, 160, 54, 12));
        Label2 = new QLabel(Dialog);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setGeometry(QRect(30, 160, 54, 12));
        Line1 = new QLineEdit(Dialog);
        Line1->setObjectName(QStringLiteral("Line1"));
        Line1->setGeometry(QRect(130, 40, 113, 20));
        Line2 = new QLineEdit(Dialog);
        Line2->setObjectName(QStringLiteral("Line2"));
        Line2->setGeometry(QRect(120, 100, 113, 20));
        Label = new QLabel(Dialog);
        Label->setObjectName(QStringLiteral("Label"));
        Label->setGeometry(QRect(260, 200, 54, 12));
        LabelBack = new QLabel(Dialog);
        LabelBack->setObjectName(QStringLiteral("LabelBack"));
        LabelBack->setGeometry(QRect(20, 40, 54, 12));
        LabelBack->raise();
        Button1->raise();
        Label1->raise();
        Label2->raise();
        Line1->raise();
        Line2->raise();
        Label->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        Button1->setText(QApplication::translate("Dialog", "PushButton", 0));
        Label1->setText(QApplication::translate("Dialog", "TextLabel", 0));
        Label2->setText(QApplication::translate("Dialog", "TextLabel", 0));
        Label->setText(QApplication::translate("Dialog", "TextLabel", 0));
        LabelBack->setText(QApplication::translate("Dialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
