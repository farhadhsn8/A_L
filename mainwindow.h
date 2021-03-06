#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "dfam.h"
#include "turm.h"
#include <QMainWindow>
#include "mainlab.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget * parent = 0);
    ~MainWindow();



private slots:
    void on_okbtn_clicked();

private:
    Ui::MainWindow *ui;
    mainlab * ml;
};

#endif // MAINWINDOW_H
