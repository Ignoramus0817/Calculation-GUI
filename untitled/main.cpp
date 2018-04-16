#include "calgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalGUI w;
    w.show();

    return a.exec();
}
