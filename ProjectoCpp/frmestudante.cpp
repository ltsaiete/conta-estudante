#include "frmestudante.h"
#include "ui_frmestudante.h"
#include <QMessageBox>
#include <string>
using namespace std;

FrmEstudante::FrmEstudante(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmEstudante)
{
    ui->setupUi(this);

    est = new Estudante[30];
    cont=0;
}

FrmEstudante::~FrmEstudante()
{
    delete ui;
}

void FrmEstudante::on_btSalvar_clicked()
{
    QString nome = ui->txtNome->text();
    QString BI = ui->txtBI->text();
    QString numEst = ui->txtNumEst->text();
    QString genero = ui->txtGenero->text();
    QString instituicao = ui->txtInstituicao->text();
    QString curso = ui->txtCurso->text();

    est[cont] = *new Estudante(nome.toStdString(), BI.toStdString(), numEst.toLong(), genero.toStdString(), instituicao.toStdString(), curso.toStdString());

    /*
    est[cont].setNome( nome.toStdString());
    est[cont].setNumBI(BI.toStdString());
    est[cont].setNumEst(numEst.toLong());
    est[cont].setGenero(genero.toStdString());
    est[cont].setInstituicao(instituicao.toStdString());
    est[cont].setCurso(curso.toStdString());
    */

    QString dados = "Nome: " + nome + "\nNumero de BI: " + BI + "\nNumero de Estudante: " + numEst
            + "\nGenero: " + genero + "\nInstituicao: " + instituicao + "\nCurso: " + curso;

    QMessageBox::information(this, "Dados do Estudante", dados);

    cont++;
    on_btLimpar_clicked();

}

void FrmEstudante::on_btLimpar_clicked()
{
    ui->txtNome->clear();
    ui->txtBI->clear();
    ui->txtNumEst->clear();
    ui->txtGenero->clear();
    ui->txtInstituicao->clear();
    ui->txtCurso->clear();

    ui->txtNome->setFocus();
}

