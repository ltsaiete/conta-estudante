#ifndef FRMMENU_H
#define FRMMENU_H

#include <QMainWindow>
#include "frmestudante.h"

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

private:
    Ui::FrmMenu *ui;
    FrmEstudante *mnCadEst;
};
#endif // FRMMENU_H
