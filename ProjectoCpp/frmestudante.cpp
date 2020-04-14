#include "frmestudante.h"
#include "ui_frmestudante.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <fstream>
#include <string>
using namespace std;

FrmEstudante::FrmEstudante(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmEstudante)
{
    ui->setupUi(this);
}

FrmEstudante::~FrmEstudante()
{
    delete ui;
}

void FrmEstudante::on_btSalvar_clicked()
{
    Estudante estudante;


    QString nome = ui->txtNome->text();
    QString BI = ui->txtBI->text();
    QString numEst = ui->txtNumEst->text();
    QString genero = ui->txtGenero->text();
    QString instituicao = ui->txtInstituicao->text();
    QString curso = ui->txtCurso->text();

    estudante = *new Estudante(nome.toStdString(), BI.toStdString(), numEst.toLong(), genero.toStdString(), instituicao.toStdString(), curso.toStdString());

    QString dados = "Nome: " + nome + "\nNumero de BI: " + BI + "\nNumero de Estudante: " + numEst
            + "\nGenero: " + genero + "\nInstituicao: " + instituicao + "\nCurso: " + curso;

    estudante.saveToFile(estudante);

    QMessageBox::information(this, "Dados do Estudante", dados);

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

