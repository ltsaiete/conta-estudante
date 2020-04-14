#ifndef FRMESTUDANTE_H
#define FRMESTUDANTE_H
#include "estudante.h"
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

    void saveTofile(Estudante estudante);



private:
    Ui::FrmEstudante *ui;




};

#endif // FRMESTUDANTE_H
