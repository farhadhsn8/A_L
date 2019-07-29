#ifndef LAB_H
#define LAB_H

#include <QDialog>
#include <QPainter>
namespace Ui {
class lab;
}

class lab : public QDialog
{
    Q_OBJECT

public:
    explicit lab(QWidget *parent = 0);
    ~lab();

private:
    Ui::lab *ui;
};

#endif // LAB_H
