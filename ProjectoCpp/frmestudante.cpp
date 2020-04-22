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
    Validar v;
    bool val;
    QString nome = ui->txtNome->text();
    QString BI = ui->txtBI->text();
    QString numEst = ui->txtNumEst->text();
    QString genero;
    QString instituicao = ui->txtInstituicao->text();
    QString curso = ui->txtCurso->text();

    if(ui->rbMasc->isChecked()){
        genero = ui->rbMasc->text();
    }else if(ui->rbFem->isChecked()){
        genero = ui->rbFem->text();
    }

    val = v.validaString(nome.toStdString(), 3, 25);
    val = v.validaString(BI.toStdString(), 13, 13);
    val = v.validaLong(numEst.toLong(), 10000000, 99999999);
    val = v.validaString(instituicao.toStdString(), 2, 25);
    val = v.validaString(curso.toStdString(), 3, 25);

    if(val==true){
        estudante = *new Estudante(nome.toStdString(), BI.toStdString(), numEst.toLong(), genero.toStdString(), instituicao.toStdString(), curso.toStdString());

        QString dados = "Nome: " + nome + "\nNumero de BI: " + BI + "\nNumero de Estudante: " + numEst
                + "\nGenero: " + genero + "\nInstituicao: " + instituicao + "\nCurso: " + curso;

        estudante.saveToFile(estudante);
        on_btLimpar_clicked();
        QMessageBox::information(this, "Dados do Estudante", dados);
    }else{
        QMessageBox::information(this, "[ERRO]", "Verifique os dados e tente novamente.");
    }
}

void FrmEstudante::on_btLimpar_clicked()
{
    ui->txtNome->clear();
    ui->txtBI->clear();
    ui->txtNumEst->clear();
    ui->txtInstituicao->clear();
    ui->txtCurso->clear();

    ui->txtNome->setFocus();
}

