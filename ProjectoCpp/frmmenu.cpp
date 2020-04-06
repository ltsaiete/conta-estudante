#include "frmmenu.h"
#include "ui_frmmenu.h"

FrmMenu::FrmMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FrmMenu)
{
    ui->setupUi(this);
}

FrmMenu::~FrmMenu()
{
    delete ui;
}

