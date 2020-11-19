/********************************************************************************
** Form generated from reading UI file 'registro_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_DIALOG_H
#define UI_REGISTRO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_registro_dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *registro_dialog)
    {
        if (registro_dialog->objectName().isEmpty())
            registro_dialog->setObjectName(QString::fromUtf8("registro_dialog"));
        registro_dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(registro_dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(registro_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), registro_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), registro_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(registro_dialog);
    } // setupUi

    void retranslateUi(QDialog *registro_dialog)
    {
        registro_dialog->setWindowTitle(QCoreApplication::translate("registro_dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registro_dialog: public Ui_registro_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_DIALOG_H
