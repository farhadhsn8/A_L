#include "mainlab.h"
#include "ui_mainlab.h"

mainlab::mainlab(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainlab)
{
    ui->setupUi(this);
    ui->labwidget->createlab();
}

mainlab::~mainlab()
{
    delete ui;
}
