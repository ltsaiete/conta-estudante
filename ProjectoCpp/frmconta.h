#ifndef FRMCONTA_H
#define FRMCONTA_H

#include <QDialog>

namespace Ui {
class FrmConta;
}

class FrmConta : public QDialog
{
    Q_OBJECT

public:
    explicit FrmConta(QWidget *parent = nullptr);
    ~FrmConta();

private:
    Ui::FrmConta *ui;
};

#endif // FRMCONTA_H
