#ifndef FRMESTUDANTE_H
#define FRMESTUDANTE_H
#include "estudante.h"
#include <QDialog>

namespace Ui {
class FrmEstudante;
}

class FrmEstudante : public QDialog
{
    Q_OBJECT

public:
    explicit FrmEstudante(QWidget *parent = nullptr);
    ~FrmEstudante();
    Estudante *est;
    int cont;

private slots:
    void on_btSalvar_clicked();

    void on_btLimpar_clicked();


private:
    Ui::FrmEstudante *ui;


};

#endif // FRMESTUDANTE_H
