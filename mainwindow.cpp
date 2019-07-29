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



