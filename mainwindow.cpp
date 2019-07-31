#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dfam.h"
#include <QMessageBox>
#include "mainlab.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_okbtn_clicked()
{
   // mainlabb ml;
   // ml.setModal(true);
//    ml.exec();
    ml = new mainlab (this);
    ml->show();

}
