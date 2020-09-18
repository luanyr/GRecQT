#include "form_client.h"
#include "ui_form_client.h"

Form_client::Form_client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_client)
{
    ui->setupUi(this);
    Startmenu_Init();
}

Form_client::~Form_client()
{
    delete ui;
}


void Form_client::Startmenu_Init()
{
    sm    = new startmenu(this);
    rcdm  = new recordmenu(this);
    rpm   = new repmenu(this);
    fm    = new filmenu(this);
    mgm   = new managemenu(this);
    um    = new usermenu(this);
    tm    = new tunnelmenu(this);
    spm   = new specfymenu(this);
    TBmenu= new QToolBox(this);
    TBmenu->resize(1000, 350);
    TBmenu->addItem(  sm,     tr("开始"));
    TBmenu->addItem(rcdm,     tr("记录"));
    TBmenu->addItem( rpm,     tr("回放"));
    TBmenu->addItem(  fm,     tr("筛选"));
    TBmenu->addItem( mgm,     tr("管理"));
    TBmenu->addItem(  um,     tr("用户"));
    TBmenu->addItem(  tm,     tr("通道"));
    TBmenu->addItem( spm,     tr("特殊"));
}
