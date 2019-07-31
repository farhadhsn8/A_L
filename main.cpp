#include "mainwindow.h"
#include <QApplication>
#include "machine.h"
#include "dfavertex.h"
using namespace AL;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
