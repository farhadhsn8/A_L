#ifndef MAINLAB_H
#define MAINLAB_H

#include <QMainWindow>

namespace Ui {
class mainlab;
}

class mainlab : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainlab(QWidget *parent = 0);
    ~mainlab();

private:
    Ui::mainlab *ui;
};

#endif // MAINLAB_H
