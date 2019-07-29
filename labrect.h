#ifndef LABRECT_H
#define LABRECT_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class labrect;
}

class labrect : public QWidget
{
    Q_OBJECT

public:
    explicit labrect(QWidget *parent = 0);
    ~labrect();
    void paintEvent(QPaintEvent *event);
private:
    Ui::labrect *ui;
};

#endif // LABRECT_H
