#ifndef OPERACOESCARTAO_H
#define OPERACOESCARTAO_H

#include <QDialog>

namespace Ui {
class OperacoesCartao;
}

class OperacoesCartao : public QDialog
{
    Q_OBJECT

public:
    explicit OperacoesCartao(QWidget *parent = nullptr);
    ~OperacoesCartao();

private slots:
    void on_btLevantamento_clicked();

    void on_btTransferencia_clicked();

    void on_btPropinas_clicked();

    void on_btDeposito_clicked();

private:
    Ui::OperacoesCartao *ui;
};

#endif // OPERACOESCARTAO_H
