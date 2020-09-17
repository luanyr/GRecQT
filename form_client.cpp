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
    this->resize(800, 800);
    Startmenu_Init();

}

void Form_client::Startmenu_Init()
{
    sm = new startmenu(this);
    TBmenu = new QToolBox(this);
    TBmenu->resize(800, 800);
    TBmenu->addItem(sm, tr("开始"));

}
