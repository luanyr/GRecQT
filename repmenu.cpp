#include "repmenu.h"
#include "ui_repmenu.h"

repmenu::repmenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::repmenu)
{
    ui->setupUi(this);
    repmenu_Init();
}

repmenu::~repmenu()
{
    delete ui;
}

void repmenu::repmenu_Init()
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
    PBcjkTimeSelReplay->move(195, 0);

    LAstarttime = new QLabel(this);
    LAstarttime->setFont(ft);
    LAstarttime->setText(tr("起始时间"));
    LAstarttime->move(150, 55);

    LAendtime = new QLabel(this);
    LAendtime->setFont(ft);
    LAendtime->setText(tr("结束时间"));
    LAendtime->move(150, 95);

    DTEstarttime = new QDateTimeEdit(this);
    DTEstarttime->setDateTime(QDateTime::currentDateTime());
    DTEstarttime->resize(120, 30);
    DTEstarttime->move(220, 45);

    DTEendtime = new QDateTimeEdit(this);
    DTEendtime->setDateTime(QDateTime::currentDateTime());
    DTEendtime->resize(120, 30);
    DTEendtime->move(220, 85);

    QIcon PBchktypeSelReplayicon;
    PBchktypeSelReplayicon.addFile(":/icon/icon/ygg.png");
    PBchktypeSelReplay = new QPushButton(this);
    PBchktypeSelReplay->resize(105, 40);
    PBchktypeSelReplay->setFont(ft);
    PBchktypeSelReplay->setText(tr("类型约束"));
    //PBchkchnselreplay->setStyleSheet("background-color:rgba(0,0,0,0)");
    PBchktypeSelReplay->setIcon(PBchkchnselreplayicon);
    PBchktypeSelReplay->setIconSize(QSize(30, 30));
    PBchktypeSelReplay->move(380, 0);

    QIcon type1icon;
    type1icon.addFile(":/icon/icon/1.png");
    PBtype1 = new QPushButton(this);
    PBtype1->resize(50, 30);
    PBtype1->setText(tr("类型1"));
    PBtype1->setIcon(type1icon);
    PBtype1->setIconSize(QSize(15, 15));
    PBtype1->move(380, 45);

    QIcon type2icon;
    type2icon.addFile(":/icon/icon/2.png");
    PBtype2 = new QPushButton(this);
    PBtype2->resize(50, 30);
    PBtype2->setText(tr("类型2"));
    PBtype2->setIcon(type2icon);
    PBtype2->setIconSize(QSize(15, 15));
    PBtype2->move(435, 45);

    QIcon type3icon;
    type3icon.addFile(":/icon/icon/3.png");
    PBtype3 = new QPushButton(this);
    PBtype3->resize(50, 30);
    PBtype3->setText(tr("类型3"));
    PBtype3->setIcon(type3icon);
    PBtype3->setIconSize(QSize(15, 15));
    PBtype3->move(380, 90);

    QIcon type4icon;
    type4icon.addFile(":/icon/icon/4.png");
    PBtype4 = new QPushButton(this);
    PBtype4->resize(50, 30);
    PBtype4->setText(tr("类型4"));
    PBtype4->setIcon(type4icon);
    PBtype4->setIconSize(QSize(15, 15));
    PBtype4->move(435, 90);

    QIcon PBchkChanSelReplayicon;
    PBchkChanSelReplayicon.addFile(":/icon/icon/ygg.png");
    PBchkChanSelReplay = new QPushButton(this);
    PBchkChanSelReplay->resize(100, 40);
    PBchkChanSelReplay->setFont(ft);
    PBchkChanSelReplay->setText(tr("输出端口"));
    PBchkChanSelReplay->setIcon(PBchkChanSelReplayicon);
    PBchkChanSelReplay->setIconSize(QSize(30, 30));
    PBchkChanSelReplay->move(550, 0);

    QStringList cbxoutcom_list;
    cbxoutcom_list << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9"\
                   <<"10" << "11" << "12" << "13" << "14";
    CBXoutcom = new QComboBox(this);
    CBXoutcom->addItems(cbxoutcom_list);
    CBXoutcom->setFont(ft);
    CBXoutcom->resize(100, 40);
    CBXoutcom->move(550, 60);

    QIcon TBreplayicon;
    TBreplayicon.addFile(":/icon/icon/run.png");
    TBreplay = new QToolButton(this);
    TBreplay->resize(80, 80);
    TBreplay->setFont(ft);
    TBreplay->setText(tr("回放开始"));
    TBreplay->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBreplay->setIcon(TBreplayicon);
    TBreplay->setIconSize(QSize(50, 50));
    TBreplay->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBreplay->move(700, 40);

    QIcon TBpauseicon;
    TBpauseicon.addFile(":/icon/icon/pause.png");
    TBpause = new QToolButton(this);
    TBpause->resize(80, 80);
    TBpause->setFont(ft);
    TBpause->setText(tr("回放暂停"));
    TBpause->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBpause->setIcon(TBpauseicon);
    TBpause->setIconSize(QSize(50, 50));
    TBpause->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBpause->move(800, 40);

    QIcon TBstopicon;
    TBstopicon.addFile(":/icon/icon/stop.png");
    TBstop = new QToolButton(this);
    TBstop->resize(80, 80);
    TBstop->setFont(ft);
    TBstop->setText(tr("回放停止"));
    TBstop->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBstop->setIcon(TBstopicon);
    TBstop->setIconSize(QSize(50, 50));
    TBstop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBstop->move(900, 40);
}
