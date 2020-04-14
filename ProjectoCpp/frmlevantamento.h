#ifndef FRMLEVANTAMENTO_H
#define FRMLEVANTAMENTO_H
#include "contaestudante.h"
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

private slots:
    void on_btConfirm_clicked();

private:
    Ui::FrmLevantamento *ui;
    bool novoSaldo(long conta, float valor);
    float conta();
};

#endif // FRMLEVANTAMENTO_H
