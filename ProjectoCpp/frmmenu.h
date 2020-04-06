#ifndef FRMMENU_H
#define FRMMENU_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FrmMenu; }
QT_END_NAMESPACE

class FrmMenu : public QMainWindow
{
    Q_OBJECT

public:
    FrmMenu(QWidget *parent = nullptr);
    ~FrmMenu();

private:
    Ui::FrmMenu *ui;
};
#endif // FRMMENU_H
