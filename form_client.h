#ifndef FORM_CLIENT_H
#define FORM_CLIENT_H
#include <QWidget>
#include <QToolBox>
#include "startmenu.h"
#include "repmenu.h"
#include "recordmenu.h"
#include "filmenu.h"
#include "managemenu.h"
#include "managemenu.h"
#include "usermenu.h"
#include "tunnelmenu.h"
#include "specfymenu.h"
namespace Ui {
class Form_client;
}

class Form_client : public QWidget
{
    Q_OBJECT

public:
    explicit Form_client(QWidget *parent = nullptr);
    ~Form_client();

private:
    Ui::Form_client *ui;
    /*menu*/
    startmenu *sm;
    repmenu *rpm;
    recordmenu *rcdm;
    filmenu *fm;
    managemenu *mgm;
    usermenu *um;
    tunnelmenu *tm;
    specfymenu *spm;
    /*start menu*/
    QToolBox *TBmenu;
    QWidget *testwidget;
    QWidget *WGTstartmenu;
    void Form_Init();
    void Startmenu_Init();
};

#endif // FORM_CLIENT_H
