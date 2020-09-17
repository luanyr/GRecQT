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
    QFont ft;
    ft.setPointSize(10);
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
    TBfilesz->setIconSize(QSize(40, 40));
    TBfilesz->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBfilesz->setText(tr("设置文件大小"));
    TBfilesz->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBfilesz->resize(80, 80);
    TBfilesz->move(200, 30);

    QIcon TBchkRec_AIcon;
    TBchkRec_AIcon.addFile(tr(":/icon/icon/line.png"));
    TBchkRec_A = new QToolButton(this);
    TBchkRec_A->setFont(ft);
    TBchkRec_A->setIcon(TBchkRec_AIcon);
    TBchkRec_A->setIconSize(QSize(40, 40));
    TBchkRec_A->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBchkRec_A->setText(tr("SRIO0"));
    TBchkRec_A->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBchkRec_A->resize(80, 80);
    TBchkRec_A->move(300, 30);

    QIcon TBchkRec_BIcon;
    TBchkRec_BIcon.addFile(tr(":/icon/icon/line.png"));
    TBchkRec_B = new QToolButton(this);
    TBchkRec_B->setFont(ft);
    TBchkRec_B->setIcon(TBchkRec_AIcon);
    TBchkRec_B->setIconSize(QSize(40, 40));
    TBchkRec_B->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBchkRec_B->setText(tr("SRIO1"));
    TBchkRec_B->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBchkRec_B->resize(80, 80);
    TBchkRec_B->move(380, 30);

    QIcon TBRecStartIcon;
    TBRecStartIcon.addFile(tr(":/icon/icon/gou.png"));
    TBRecStart = new QToolButton(this);
    TBRecStart->setFont(ft);
    TBRecStart->setIcon(TBRecStartIcon);
    TBRecStart->setIconSize(QSize(40, 40));
    TBRecStart->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBRecStart->setText(tr("开始记录"));
    TBRecStart->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBRecStart->resize(80, 80);
    TBRecStart->move(460, 30);

    QIcon TBRecStopIcon;
    TBRecStopIcon.addFile(tr(":/icon/icon/cha.png"));
    TBRecStop = new QToolButton(this);
    TBRecStop->setFont(ft);
    TBRecStop->setIcon(TBRecStopIcon);
    TBRecStop->setIconSize(QSize(40, 40));
    TBRecStop->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBRecStop->setText(tr("停止记录"));
    TBRecStop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBRecStop->resize(80, 80);
    TBRecStop->move(540, 30);
}
