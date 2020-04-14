#ifndef LOGIN_H
#define LOGIN_H
#include "contaestudante.h"
#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btLogin_clicked();

    void on_btLimpar_clicked();
    void fileConta(QString numConta);

private:
    Ui::Login *ui;
    bool verPass(QString numConta, int pass);
};

#endif // LOGIN_H
