#ifndef FRMLEVANTAMENTO_H
#define FRMLEVANTAMENTO_H

#include <QDialog>

namespace Ui {
class FrmLevantamento;
}

class FrmLevantamento : public QDialog
{
    Q_OBJECT

public:
    explicit FrmLevantamento(QWidget *parent = nullptr);
    ~FrmLevantamento();

private:
    Ui::FrmLevantamento *ui;
};

#endif // FRMLEVANTAMENTO_H
