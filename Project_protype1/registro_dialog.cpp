#include "registro_dialog.h"
#include "ui_registro_dialog.h"

registro_dialog::registro_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registro_dialog)
{
    ui->setupUi(this);
}

registro_dialog::~registro_dialog()
{
    delete ui;
}
