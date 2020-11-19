/********************************************************************************
** Form generated from reading UI file 'menu_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_DIALOG_H
#define UI_MENU_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_menu_dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *menu_dialog)
    {
        if (menu_dialog->objectName().isEmpty())
            menu_dialog->setObjectName(QString::fromUtf8("menu_dialog"));
        menu_dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(menu_dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(menu_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), menu_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), menu_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(menu_dialog);
    } // setupUi

    void retranslateUi(QDialog *menu_dialog)
    {
        menu_dialog->setWindowTitle(QCoreApplication::translate("menu_dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu_dialog: public Ui_menu_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_DIALOG_H
