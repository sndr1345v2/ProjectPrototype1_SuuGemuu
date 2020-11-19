#include "inicio_dialog.h"
#include "ui_inicio_dialog.h"

inicio_dialog::inicio_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inicio_dialog)
{
    ui->setupUi(this);
}

inicio_dialog::~inicio_dialog()
{
    delete ui;
}
