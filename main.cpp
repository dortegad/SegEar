#include <QtGui/QApplication>
#include "segearwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SegEarWindow w;
    w.show();
    
    return a.exec();
}
