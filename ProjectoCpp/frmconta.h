#ifndef FRMCONTA_H
#define FRMCONTA_H
#include "frmestudante.h"
#include "contaestudante.h"
#include <QDialog>

namespace Ui {
class FrmConta;
}

class FrmConta : public QDialog
{
    Q_OBJECT

public:
    explicit FrmConta(QWidget *parent = nullptr);
    ~FrmConta();

    ContaEstudante *contaEst;

private slots:
    void on_btSalvar_clicked();

    void on_btLimpar_clicked();

private:
    Ui::FrmConta *ui;
    bool existeBI(string BI);
    int cont;
};

#endif // FRMCONTA_H
