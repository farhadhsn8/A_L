#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dfam.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->menuwid);
}

MainWindow::~MainWindow()
{
    delete ui;
}








void MainWindow::on_okbtn_clicked(bool checked)
{

  //  lab *l = new lab;
   // l->show();
   // hide();

    if (ui->dfabtn->isChecked())
    {
        AL::dfam * dfa =new AL::dfam();
    }
    if (ui->turingbtn->isChecked())
    {
        AL::turm * tu =new AL::turm();
    }
    if (ui->nfabtn->isChecked())
    {

    }
    if (ui->npdabtn->isChecked())
    {

    }
}
