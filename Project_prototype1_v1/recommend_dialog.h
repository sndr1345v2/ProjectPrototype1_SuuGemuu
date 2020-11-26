#ifndef RECOMMEND_DIALOG_H
#define RECOMMEND_DIALOG_H

#include <QDialog>
#include <inicio_dialog.h>

namespace Ui {
class recommend_dialog;
}

class recommend_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit recommend_dialog(QWidget *parent = nullptr);
    ~recommend_dialog();

private:
    Ui::recommend_dialog *ui;
};

#endif // RECOMMEND_DIALOG_H
