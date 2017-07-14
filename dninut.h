#ifndef DNINUT_H
#define DNINUT_H

#include <QWidget>

namespace Ui {
class dninut;
}

class dninut : public QWidget
{
    Q_OBJECT

public:
    explicit dninut(QWidget *parent = 0);
    ~dninut();

private:
    Ui::dninut *ui;
};

#endif // DNINUT_H
