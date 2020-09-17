#include "mainwindow.h"

#include <QApplication>
#include "recordmenu.h"
#include "startmenu.h"
#include "repmenu.h"
#include "filmenu.h"
#include "managemenu.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   managemenu mm;
   mm.show();
   return a.exec();
}
