#ifndef FRMESTUDANTE_H
#define FRMESTUDANTE_H
#include "estudante.h"
#include "validar.h"
#include <fstream>
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
    int cont;

private slots:
    void on_btSalvar_clicked();

    void on_btLimpar_clicked();

    void saveTofile(QString nome , QString BI, QString numEst, QString genero, QString instituicao, QString curso);



private:
    Ui::FrmEstudante *ui;




};

#endif // FRMESTUDANTE_H
