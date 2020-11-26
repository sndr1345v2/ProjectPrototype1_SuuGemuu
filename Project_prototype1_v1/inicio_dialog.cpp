#include "inicio_dialog.h"
#include "ui_inicio_dialog.h"
#include <QIcon>

inicio_dialog::inicio_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inicio_dialog)
{
    ui->setupUi(this);

    QString cs1="QPushButton {"
                " background-color: #f5f5f5;"
                "border:#f5f5f5;"
                "}"
                "QPushButton:hover {"
                "background-color: #fafafa"
                "}";


    QString cs2="QPushButton {"
                " background-color: #ffeb3b;"
                "border:#ffeb3b;"
                "}"
                "QPushButton:hover {"
                "background-color: #faff17"
                "}";

    QString cs3="QPushButton {"
                " background-color: #4ae126;"
                "border:#4ae126;"
                "}"
                "QPushButton:hover {"
                "background-color: #4ff528"
                "}";

    QString cs4="QPushButton {"
                " background-color: #f5f5f5;"
                "border:#f5f5f5;"
                "font-size: 20px;"
                " padding: 15px 32px;"
                " text-align: left;"
                "}"
                "QPushButton:hover {"
                "background-color: #fafafa"
                "}";

    ui->pushButton_progress->setStyleSheet(cs1);
    ui->pushButton_learn->setStyleSheet(cs2);
    ui->pushButton_recommend->setStyleSheet(cs3);
    ui->pushButton_ayuda->setStyleSheet(cs4);
    ui->pushButton_config->setStyleSheet(cs4);
}

inicio_dialog::~inicio_dialog()
{
    delete ui;
}

void inicio_dialog::on_pushButton_learn_clicked()
{

}
