#include "form_client.h"
#include "ui_form_client.h"

Form_client::Form_client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_client)
{
    ui->setupUi(this);
    Form_Init();

}

Form_client::~Form_client()
{
    delete ui;
}

void Form_client::Form_Init()
{
    this->resize(1000, 800);
    Startmenu_Init();

}

void Form_client::Startmenu_Init()
{
    sm = new startmenu(this);
    rcdm = new recordmenu(this);
    rpm = new repmenu(this);
    TBmenu = new QToolBox(this);
    TBmenu->resize(1000, 200);
    TBmenu->addItem(sm, tr("开始"));
    TBmenu->addItem(rcdm, tr("记录"));
    TBmenu->addItem(rpm, tr("回放"));
}
