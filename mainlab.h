#ifndef MAINLAB_H
#define MAINLAB_H

#include <QMainWindow>
#include "object.h"
namespace Ui {
class mainlab;
}

class mainlab : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainlab(QWidget *parent = 0);
    ~mainlab();

private slots:
    void on_addvbtn_clicked();

    void on_addebtn_clicked();



    void on_inputbtn_clicked();

private:
    Ui::mainlab *ui;
};

#endif // MAINLAB_H
