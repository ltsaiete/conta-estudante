#ifndef FRMDEPOSITO_H
#define FRMDEPOSITO_H
#include "contaestudante.h"
#include "validar.h"

#include <QDialog>

namespace Ui {
class FrmDeposito;
}

class FrmDeposito : public QDialog
{
    Q_OBJECT

public:
    explicit FrmDeposito(QWidget *parent = nullptr);
    ~FrmDeposito();

private slots:
    void on_btConfirm_clicked();

private:
    Ui::FrmDeposito *ui;
    bool novoSaldo(long conta, float valor);
    long conta();
};

#endif // FRMDEPOSITO_H
