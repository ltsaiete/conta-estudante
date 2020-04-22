#ifndef FRMCONTA_H
#define FRMCONTA_H
#include "frmestudante.h"
#include "contaestudante.h"
#include "validar.h"
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

private slots:
    void on_btSalvar_clicked();
    void on_btLimpar_clicked();

    void saveToFile(QString BI, QString numConta, QString senha, QString saldo);

private:
    Ui::FrmConta *ui;
    bool existeBI(QString BI);

};

#endif // FRMCONTA_H
