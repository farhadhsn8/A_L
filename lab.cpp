#include "lab.h"
#include "ui_lab.h"

lab::lab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lab)
{
    ui->setupUi(this);
}

lab::~lab()
{
    delete ui;
}
