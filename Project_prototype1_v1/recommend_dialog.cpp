#include "recommend_dialog.h"
#include "ui_recommend_dialog.h"

recommend_dialog::recommend_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recommend_dialog)
{
    ui->setupUi(this);

}

recommend_dialog::~recommend_dialog()
{
    delete ui;
}
