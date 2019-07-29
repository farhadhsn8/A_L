#include "mainwindow.h"
#include <QApplication>
#include "dfam.h"
#include "lab.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    AL::dfam k;
    lab l;
    l.show();
    return a.exec();
}
