#include "live_alert.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    live_alert w;
    w.show();

    return a.exec();
}
