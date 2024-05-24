#include "ModuleTestSliderArduino.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModuleTestSliderArduino w;
    w.show();
    return a.exec();
}
