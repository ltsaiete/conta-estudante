#ifndef FRMESTUDANTE_H
#define FRMESTUDANTE_H

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

private:
    Ui::FrmEstudante *ui;
};

#endif // FRMESTUDANTE_H