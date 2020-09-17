#include "filmenu.h"
#include "ui_filmenu.h"

filmenu::filmenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::filmenu)
{
    ui->setupUi(this);
    Filmenu_Init();
}

filmenu::~filmenu()
{
    delete ui;
}

void filmenu::Filmenu_Init()
{
    this->resize(1000, 150);
    QFont ft;
    ft.setPointSize(12);
    QIcon PBchkchnselreplayicon;
    PBchkchnselreplayicon.addFile(":/icon/icon/ygg.png");
    PBchkchnselreplay = new QPushButton(this);
    PBchkchnselreplay->resize(100, 40);
    PBchkchnselreplay->setFont(ft);
    PBchkchnselreplay->setText(tr("通道约束"));
    //PBchkchnselreplay->setStyleSheet("background-color:rgba(0,0,0,0)");
    PBchkchnselreplay->setIcon(PBchkchnselreplayicon);
    PBchkchnselreplay->setIconSize(QSize(30, 30));
    PBchkchnselreplay->move(20,0);

    QIcon TBchkReplayAicon;
    TBchkReplayAicon.addFile(":/icon/icon/line.png");
    TBchkReplayA = new QToolButton(this);
    TBchkReplayA->resize(80, 80);
    TBchkReplayA->setFont(ft);
    TBchkReplayA->setText(tr("SRIO0"));
    TBchkReplayA->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBchkReplayA->setIcon(TBchkReplayAicon);
    TBchkReplayA->setIconSize(QSize(50, 50));
    TBchkReplayA->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBchkReplayA->move(0, 40);

    QIcon TBchkReplayBicon;
    TBchkReplayBicon.addFile(":/icon/icon/line.png");
    TBchkReplayB = new QToolButton(this);
    TBchkReplayB->resize(80, 80);
    TBchkReplayB->setFont(ft);
    TBchkReplayB->setText(tr("SRIO1"));
    TBchkReplayB->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBchkReplayB->setIcon(TBchkReplayBicon);
    TBchkReplayB->setIconSize(QSize(50, 50));
    TBchkReplayB->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBchkReplayB->move(60, 40);

    QIcon PBcjkTimeSelReplayicon;
    PBcjkTimeSelReplayicon.addFile(":/icon/icon/ygg.png");
    PBcjkTimeSelReplay = new QPushButton(this);
    PBcjkTimeSelReplay->resize(100, 40);
    PBcjkTimeSelReplay->setFont(ft);
    PBcjkTimeSelReplay->setText(tr("时间约束"));
    //PBchkchnselreplay->setStyleSheet("background-color:rgba(0,0,0,0)");
    PBcjkTimeSelReplay->setIcon(PBchkchnselreplayicon);
    PBcjkTimeSelReplay->setIconSize(QSize(30, 30));
    PBcjkTimeSelReplay->move(250, 0);

    LAstarttime = new QLabel(this);
    LAstarttime->setFont(ft);
    LAstarttime->setText(tr("起始时间"));
    LAstarttime->move(200, 55);

    LAendtime = new QLabel(this);
    LAendtime->setFont(ft);
    LAendtime->setText(tr("结束时间"));
    LAendtime->move(200, 95);

    DTEstarttime = new QDateTimeEdit(this);
    DTEstarttime->setDateTime(QDateTime::currentDateTime());
    DTEstarttime->resize(120, 30);
    DTEstarttime->move(275, 45);

    DTEendtime = new QDateTimeEdit(this);
    DTEendtime->setDateTime(QDateTime::currentDateTime());
    DTEendtime->resize(120, 30);
    DTEendtime->move(275, 85);

    QIcon PBchktypeSelReplayicon;
    PBchktypeSelReplayicon.addFile(":/icon/icon/ygg.png");
    PBchktypeSelReplay = new QPushButton(this);
    PBchktypeSelReplay->resize(125, 40);
    PBchktypeSelReplay->setFont(ft);
    PBchktypeSelReplay->setText(tr("类型约束"));
    //PBchkchnselreplay->setStyleSheet("background-color:rgba(0,0,0,0)");
    PBchktypeSelReplay->setIcon(PBchkchnselreplayicon);
    PBchktypeSelReplay->setIconSize(QSize(30, 30));
    PBchktypeSelReplay->move(490, 0);

    QIcon type1icon;
    type1icon.addFile(":/icon/icon/1.png");
    PBtype1 = new QPushButton(this);
    PBtype1->resize(60, 30);
    PBtype1->setText(tr("类型1"));
    PBtype1->setIcon(type1icon);
    PBtype1->setIconSize(QSize(15, 15));
    PBtype1->move(490, 45);

    QIcon type2icon;
    type2icon.addFile(":/icon/icon/2.png");
    PBtype2 = new QPushButton(this);
    PBtype2->resize(60, 30);
    PBtype2->setText(tr("类型2"));
    PBtype2->setIcon(type2icon);
    PBtype2->setIconSize(QSize(15, 15));
    PBtype2->move(555, 45);

    QIcon type3icon;
    type3icon.addFile(":/icon/icon/3.png");
    PBtype3 = new QPushButton(this);
    PBtype3->resize(60, 30);
    PBtype3->setText(tr("类型3"));
    PBtype3->setIcon(type3icon);
    PBtype3->setIconSize(QSize(15, 15));
    PBtype3->move(490, 90);

    QIcon type4icon;
    type4icon.addFile(":/icon/icon/4.png");
    PBtype4 = new QPushButton(this);
    PBtype4->resize(60, 30);
    PBtype4->setText(tr("类型4"));
    PBtype4->setIcon(type4icon);
    PBtype4->setIconSize(QSize(15, 15));
    PBtype4->move(555, 90);

    QIcon TBdelfileicon;
    TBdelfileicon.addFile(":/icon/icon/trash.png");
    TBdelfile = new QToolButton(this);
    TBdelfile->resize(100, 100);
    TBdelfile->setFont(ft);
    TBdelfile->setText(tr("删除文件"));
    TBdelfile->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBdelfile->setIcon(TBdelfileicon);
    TBdelfile->setIconSize(QSize(80, 80));
    TBdelfile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBdelfile->move(680, 10);

    QIcon TBsearchfileicon;
    TBsearchfileicon.addFile(":/icon/icon/icon_search.png");
    TBsearchfile = new QToolButton(this);
    TBsearchfile->resize(100, 100);
    TBsearchfile->setFont(ft);
    TBsearchfile->setText(tr("查询目录"));
    TBsearchfile->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBsearchfile->setIcon(TBsearchfileicon);
    TBsearchfile->setIconSize(QSize(60, 60));
    TBsearchfile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBsearchfile->move(800, 20);
}
