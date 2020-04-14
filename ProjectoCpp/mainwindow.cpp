#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frmestudante.h"
#include "frmconta.h"
#include "login.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btCadEstudante_clicked()
{
    FrmEstudante frmEst;
    frmEst.exec();
}

void MainWindow::on_btCadConta_clicked()
{
    FrmConta frmConta;
    frmConta.exec();
}

void MainWindow::on_btOperacoes_clicked()
{
    Login login;
    login.exec();
}
