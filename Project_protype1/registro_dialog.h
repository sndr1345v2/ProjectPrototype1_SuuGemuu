#ifndef REGISTRO_DIALOG_H
#define REGISTRO_DIALOG_H

#include <QDialog>

namespace Ui {
class registro_dialog;
}

class registro_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit registro_dialog(QWidget *parent = nullptr);
    ~registro_dialog();

private:
    Ui::registro_dialog *ui;
};

#endif // REGISTRO_DIALOG_H
