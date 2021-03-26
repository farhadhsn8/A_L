#ifndef LABPAGE_H
#define LABPAGE_H

#include <QWidget>
#include <QPainter>
#include "dfam.h"
#include "turm.h"
namespace Ui {
class labpage;
}

class mainlab;

class labpage : public QWidget
{
    Q_OBJECT
    friend mainlab;
public:
    explicit labpage(QWidget *parent = 0);
    ~labpage();
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void createlab();
private:
    AL::object * selectedobject;
    Ui::labpage *ui;
    AL::dfam * dmach;
    AL::dfavertex * selectedvertex1;
    QPoint pointofpress1;//mokhtasat noqte click shode
    AL::dfavertex * selectedvertex2;
    QPoint pointofpress2;//mokhtasat noqte click shode
    int switchofvertex;//select baraye vasl shodn edge b vertex ha


};

#endif // LABPAGE_H
