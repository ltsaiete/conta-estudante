#ifndef FRMMENU_H
#define FRMMENU_H

#include <QMainWindow>

//Importacao das janelas dos outros formularios
#include "frmestudante.h"   //Form Cadastro de estudante
#include "frmconta.h"       //Criacao de conta estudante

QT_BEGIN_NAMESPACE
namespace Ui { class FrmMenu; }
QT_END_NAMESPACE

class FrmMenu : public QMainWindow
{
    Q_OBJECT

public:
    FrmMenu(QWidget *parent = nullptr);
    ~FrmMenu();

private slots:
    void on_mnCadEst_clicked();

    void on_mnCadConta_clicked();


    void on_btOperaCartao_clicked();

private:
    Ui::FrmMenu *ui;
    //Criacao dos objectos dos forms
    FrmEstudante *mnCadEst;
    FrmConta *mnCadConta;
};
#endif // FRMMENU_H
