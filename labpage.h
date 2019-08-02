#ifndef LABPAGE_H
#define LABPAGE_H

#include <QWidget>
#include <QPainter>
#include "dfam.h"
#include "turm.h"
namespace Ui {
class labpage;
}

class labpage : public QWidget
{
    Q_OBJECT

public:
    explicit labpage(QWidget *parent = 0);
    ~labpage();
    void paintEvent(QPaintEvent *event);
    void createlab();
private:
    Ui::labpage *ui;
    AL::dfam * dmach;


};

#endif // LABPAGE_H
