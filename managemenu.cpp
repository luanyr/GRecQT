#include "managemenu.h"
#include "ui_managemenu.h"

managemenu::managemenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::managemenu)
{
    ui->setupUi(this);
    Managemenu_Init();
}

managemenu::~managemenu()
{
    delete ui;
}

void managemenu::Managemenu_Init()
{
    this->resize(1000, 150);
    QFont ft;
    ft.setPointSize(12);
    LAsettime = new QLabel(this);
    LAsettime->setFont(ft);
    LAsettime->setText(tr("设定时间"));
    LAsettime->resize(80, 20);
    LAsettime->move(30,25);

    QIcon PBsyncicon;
    PBsyncicon.addFile(":/icon/icon/ygg.png");
    PBsync = new QPushButton(this);
    PBsync->setFont(ft);
    PBsync->resize(60, 30);
    PBsync->setText(tr("同步"));
    PBsync->setIcon(PBsyncicon);
    PBsync->setIconSize(QSize(20, 20));
    PBsync->move(110, 20);

    DTEtime = new QDateTimeEdit(this);
    DTEtime->setDateTime(QDateTime::currentDateTime());
    DTEtime->resize(140, 30);
    DTEtime->move(30, 80);

    QIcon TBsendtimeicon;
    TBsendtimeicon.addFile(":/icon/icon/time.png");
    TBsendtime = new QToolButton(this);
    TBsendtime->resize(110, 110);
    TBsendtime->setFont(ft);
    TBsendtime->setText(tr("授时"));
    TBsendtime->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBsendtime->setIcon(TBsendtimeicon);
    TBsendtime->setIconSize(QSize(80, 80));
    TBsendtime->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBsendtime->move(250, 10);

    QIcon TBselfcheck;
    TBselfcheck.addFile(":/icon/icon/mang.png");
    TBsendtime = new QToolButton(this);
    TBsendtime->resize(110, 110);
    TBsendtime->setFont(ft);
    TBsendtime->setText(tr("自检"));
    TBsendtime->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBsendtime->setIcon(TBselfcheck);
    TBsendtime->setIconSize(QSize(80, 80));
    TBsendtime->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBsendtime->move(350, 10);

}
