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

private:
    Ui::OperacoesCartao *ui;
};

#endif // OPERACOESCARTAO_H
