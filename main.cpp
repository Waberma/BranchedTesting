#include "justlabelwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JustLabelWindow w;
    w.show();
    return a.exec();
}
