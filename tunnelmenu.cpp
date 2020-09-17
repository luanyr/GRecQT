#include "tunnelmenu.h"
#include "ui_tunnelmenu.h"

tunnelmenu::tunnelmenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tunnelmenu)
{
    ui->setupUi(this);
    Tunnelmenu_Init();
}

tunnelmenu::~tunnelmenu()
{
    delete ui;
}

void tunnelmenu::Tunnelmenu_Init()
{
    this->resize(1000, 150);
    QFont ft;
    ft.setPointSize(12);
    LAmdftunnel = new QLabel(this);
    LAmdftunnel->setFont(ft);
    LAmdftunnel->resize(300, 20);
    LAmdftunnel->setText(tr("修改通道名称（下次程序打开时生效）"));
    LAmdftunnel->move(10, 20);

    PBbacktodef = new QPushButton(this);
    PBbacktodef->setText(tr("恢复默认"));
    PBbacktodef->move(320, 20);

    PBconfirm = new QPushButton(this);
    PBconfirm->setText(tr("确定"));
    PBconfirm->move(880, 20);

    TWchannel = new QTabWidget(this);
    TWchannel->resize(950, 80);
    TWchannel->setStyleSheet("background-color:rgba(0,0,0,0)");
    TWchannel->move(10, 45);

}
