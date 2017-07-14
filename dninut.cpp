#include "dninut.h"
#include "ui_dninut.h"

dninut::dninut(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dninut)
{
    ui->setupUi(this);
}

dninut::~dninut()
{
    delete ui;
}
