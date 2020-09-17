#include "usermenu.h"
#include "ui_usermenu.h"

usermenu::usermenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::usermenu)
{
    ui->setupUi(this);
    Usermenu_Init();
}

usermenu::~usermenu()
{
    delete ui;
}

void usermenu::Usermenu_Init()
{
    this->resize(1000, 150);
    QFont ft;
    ft.setPointSize(12);
    LAusername = new QLabel(this);
    LAusername->setFont(ft);
    LAusername->setText(tr("用户名:"));
    LAusername->resize(80, 20);
    LAusername->move(20, 35);

    LAuserpswd = new QLabel(this);
    LAuserpswd->setFont(ft);
    LAuserpswd->setText(tr("密码:"));
    LAuserpswd->resize(80, 20);
    LAuserpswd->move(20, 75);

    LEusername = new QLineEdit(this);
    LEusername->resize(100, 20);
    LEusername->move(80, 35);

    LEuserpwsd = new QLineEdit(this);
    LEuserpwsd->resize(100, 20);
    LEuserpwsd->move(80, 75);

    QIcon TBcreatuserIcon;
    TBcreatuserIcon.addFile(tr(":/icon/icon/addusr.png"));
    TBcreatuser = new QToolButton(this);
    TBcreatuser->setFont(ft);
    TBcreatuser->setIcon(TBcreatuserIcon);
    TBcreatuser->setIconSize(QSize(60, 60));
    TBcreatuser->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBcreatuser->setText(tr("新建用户"));
    TBcreatuser->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBcreatuser->resize(85, 85);
    TBcreatuser->move(220, 20);

    QIcon TBmodifypsdwIcon;
    TBmodifypsdwIcon.addFile(tr(":/icon/icon/qianshou.png"));
    TBmodifypsdw = new QToolButton(this);
    TBmodifypsdw->setFont(ft);
    TBmodifypsdw->setIcon(TBmodifypsdwIcon);
    TBmodifypsdw->setIconSize(QSize(60, 60));
    TBmodifypsdw->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBmodifypsdw->setText(tr("修改密码"));
    TBmodifypsdw->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBmodifypsdw->resize(85, 85);
    TBmodifypsdw->move(320, 20);

    QIcon TBdeluserIcon;
    TBdeluserIcon.addFile(tr(":/icon/icon/cha.png"));
    TBdeluser = new QToolButton(this);
    TBdeluser->setFont(ft);
    TBdeluser->setIcon(TBdeluserIcon);
    TBdeluser->setIconSize(QSize(60, 60));
    TBdeluser->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBdeluser->setText(tr("删除用户"));
    TBdeluser->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBdeluser->resize(85, 85);
    TBdeluser->move(420, 20);
}
