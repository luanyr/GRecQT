#include "recordmenu.h"
#include "ui_recordmenu.h"

recordmenu::recordmenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recordmenu)
{
    ui->setupUi(this);
    Recordmenu_Init();
}

recordmenu::~recordmenu()
{
    delete ui;
}

void recordmenu::Recordmenu_Init()
{
    this->resize(1000, 150);
    QFont ft;
    ft.setPointSize(12);
    this->resize(800, 150);
    LEfilesz = new QLineEdit(this);
    LEfilesz->resize(90, 30);
    LEfilesz->move(20, 50);
    LEfilesz->setEnabled(false);

    CBfilesz = new QComboBox(this);
    CBfilesz->addItem(tr("MB"));
    CBfilesz->addItem(tr("GB"));
    CBfilesz->resize(60, 30);
    CBfilesz->move(120, 50);
    QIcon TBfileszIcon;
    TBfileszIcon.addFile(tr(":/icon/icon/save.png"));
    TBfilesz = new QToolButton(this);
    TBfilesz->setFont(ft);
    TBfilesz->setIcon(TBfileszIcon);
    TBfilesz->setIconSize(QSize(60, 60));
    TBfilesz->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBfilesz->setText(tr("设置文件大小"));
    TBfilesz->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBfilesz->resize(100, 100);
    TBfilesz->move(200, 30);

    QIcon TBchkRec_AIcon;
    TBchkRec_AIcon.addFile(tr(":/icon/icon/line.png"));
    TBchkRec_A = new QToolButton(this);
    TBchkRec_A->setFont(ft);
    TBchkRec_A->setIcon(TBchkRec_AIcon);
    TBchkRec_A->setIconSize(QSize(60, 60));
    TBchkRec_A->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBchkRec_A->setText(tr("SRIO0"));
    TBchkRec_A->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBchkRec_A->resize(100, 100);
    TBchkRec_A->move(320, 30);

    QIcon TBchkRec_BIcon;
    TBchkRec_BIcon.addFile(tr(":/icon/icon/line.png"));
    TBchkRec_B = new QToolButton(this);
    TBchkRec_B->setFont(ft);
    TBchkRec_B->setIcon(TBchkRec_AIcon);
    TBchkRec_B->setIconSize(QSize(60, 60));
    TBchkRec_B->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBchkRec_B->setText(tr("SRIO1"));
    TBchkRec_B->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBchkRec_B->resize(100, 100);
    TBchkRec_B->move(400, 30);

    QIcon TBRecStartIcon;
    TBRecStartIcon.addFile(tr(":/icon/icon/gou.png"));
    TBRecStart = new QToolButton(this);
    TBRecStart->setFont(ft);
    TBRecStart->setIcon(TBRecStartIcon);
    TBRecStart->setIconSize(QSize(60, 60));
    TBRecStart->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBRecStart->setText(tr("开始记录"));
    TBRecStart->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBRecStart->resize(100, 100);
    TBRecStart->move(480, 30);

    QIcon TBRecStopIcon;
    TBRecStopIcon.addFile(tr(":/icon/icon/cha.png"));
    TBRecStop = new QToolButton(this);
    TBRecStop->setFont(ft);
    TBRecStop->setIcon(TBRecStopIcon);
    TBRecStop->setIconSize(QSize(60, 60));
    TBRecStop->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBRecStop->setText(tr("停止记录"));
    TBRecStop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBRecStop->resize(100, 100);
    TBRecStop->move(560, 30);
}
