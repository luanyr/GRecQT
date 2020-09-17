#include "startmenu.h"
#include "ui_startmenu.h"

startmenu::startmenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::startmenu)
{
    ui->setupUi(this);
    Startmenu_Init();
}

startmenu::~startmenu()
{
    delete ui;
}

void startmenu::Startmenu_Init()
{
    this->resize(800, 150);
    QFont ft;
    ft.setPointSize(14);


    LAipaddr = new QLabel(this);
    LAipaddr->setText("IP地址:");
    LAipaddr->setFont(ft);
    LAipaddr->move(20, 40);

    LAport = new QLabel(this);
    LAport->setText("端口:");
    LAport->setFont(ft);
    LAport->move(20, 70);

    LEipaddr = new QLineEdit(this);
    LEipaddr->resize(100, 20);
    LEipaddr->move(90, 40);

    LEport = new QLineEdit(this);
    LEport->resize(100, 20);
    LEport->move(90, 70);

    QIcon TBconnecticon;
    TBconnecticon.addFile(tr(":/icon/icon/link.png"));
    TBconnect = new QToolButton(this);
    TBconnect->setIcon(TBconnecticon);
    TBconnect->setIconSize(QSize(40, 40));
    TBconnect->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBconnect->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBconnect->setText(tr("连接"));
    TBconnect->resize(80, 80);
    TBconnect->move(190, 20);

    QIcon TBdisconnecticon;
    TBdisconnecticon.addFile(tr(":/icon/icon/cha.png"));
    TBdisconnect = new QToolButton(this);
    TBdisconnect->setIcon(TBdisconnecticon);
    TBdisconnect->setIconSize(QSize(40, 40));
    TBdisconnect->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBdisconnect->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBdisconnect->setText(tr("断开"));
    TBdisconnect->resize(80, 80);
    TBdisconnect->move(240, 20);

    LAusrname = new QLabel(this);
    LAusrname->setText(tr("用户名:"));
    LAusrname->setFont(ft);
    LAusrname->move(320, 40);

    LApswd = new QLabel(this);
    LApswd->setText(tr("密码："));
    LApswd->setFont(ft);
    LApswd->move(320, 70);

    LEusrname = new QLineEdit(this);
    LEusrname->resize(100, 20);
    LEusrname->move(390, 40);

    LEpswd = new QLineEdit(this);
    LEpswd->resize(100, 20);
    LEpswd->move(390, 70);

    QIcon TBloginicon;
    TBloginicon.addFile(tr(":/icon/icon/renz.png"));
    TBlogin = new QToolButton(this);
    TBlogin->setIcon(TBloginicon);
    TBlogin->setIconSize(QSize(40, 40));
    TBlogin->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBlogin->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBlogin->setText(tr("用户登录"));
    TBlogin->resize(80, 80);
    TBlogin->move(500, 20);

    QIcon TBlogouticon;
    TBlogouticon.addFile(tr(":/icon/icon/out.png"));
    TBlogout = new QToolButton(this);
    TBlogout->setIcon(TBlogouticon);
    TBlogout->setIconSize(QSize(40, 40));
    TBlogout->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBlogout->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBlogout->setText(tr("退出登录"));
    TBlogout->resize(80, 80);
    TBlogout->move(580, 20);

    QIcon TBcloseappicon;
    TBcloseappicon.addFile(tr(":/icon/icon/end.png"));
    TBcloseapp = new QToolButton(this);
    TBcloseapp->setIcon(TBcloseappicon);
    TBcloseapp->setIconSize(QSize(40, 40));
    TBcloseapp->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBcloseapp->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBcloseapp->setText(tr("关闭程序"));
    TBcloseapp->resize(80, 80);
    TBcloseapp->move(660, 20);
}
