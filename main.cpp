#include "mainwindow.h"

#include <QApplication>
#include "recordmenu.h"
#include "startmenu.h"
#include "repmenu.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    startmenu s;
//    s.show();
//    recordmenu r;
//    r.show();
    repmenu rp;
    rp.show();
    return a.exec();
}
