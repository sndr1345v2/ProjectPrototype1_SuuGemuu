#ifndef INICIO_DIALOG_H
#define INICIO_DIALOG_H

#include <QDialog>

namespace Ui {
class inicio_dialog;
}

class inicio_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit inicio_dialog(QWidget *parent = nullptr);
    ~inicio_dialog();

private slots:
    void on_pushButton_learn_clicked();

private:
    Ui::inicio_dialog *ui;
};

#endif // INICIO_DIALOG_H
