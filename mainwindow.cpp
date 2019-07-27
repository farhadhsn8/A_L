#include "mainwindow.h"
#include "ui_mainwindow.h"

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



void MainWindow::on_okbtn_clicked()
{

}
