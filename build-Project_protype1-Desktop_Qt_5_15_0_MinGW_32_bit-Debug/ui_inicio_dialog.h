/********************************************************************************
** Form generated from reading UI file 'inicio_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_DIALOG_H
#define UI_INICIO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_inicio_dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *inicio_dialog)
    {
        if (inicio_dialog->objectName().isEmpty())
            inicio_dialog->setObjectName(QString::fromUtf8("inicio_dialog"));
        inicio_dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(inicio_dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(inicio_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), inicio_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), inicio_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(inicio_dialog);
    } // setupUi

    void retranslateUi(QDialog *inicio_dialog)
    {
        inicio_dialog->setWindowTitle(QCoreApplication::translate("inicio_dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inicio_dialog: public Ui_inicio_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_DIALOG_H
