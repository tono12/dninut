#include "dninut.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dninut w;
    w.show();

    return a.exec();
}
