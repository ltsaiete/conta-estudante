#include "frmmenu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FrmMenu w;
    w.show();
    return a.exec();
}
