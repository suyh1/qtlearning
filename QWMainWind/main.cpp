#include "QWMainWind.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWMainWind w;
    w.show();
    return a.exec();
}
