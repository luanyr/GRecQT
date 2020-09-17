#include "specfymenu.h"
#include "ui_specfymenu.h"

specfymenu::specfymenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::specfymenu)
{
    ui->setupUi(this);
    specfymenu_Init();
}

specfymenu::~specfymenu()
{
    delete ui;
}

void specfymenu::specfymenu_Init()
{
    this->resize(1000, 150);
    QFont ft;
    ft.setPointSize(14);
    QIcon TBcleardataicon;
    TBcleardataicon.addFile(":/icon/icon/trash.png");
    TBcleardata = new QToolButton(this);
    TBcleardata->resize(110, 110);
    TBcleardata->setFont(ft);
    TBcleardata->setText(tr("清空数据"));
    TBcleardata->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBcleardata->setIcon(TBcleardataicon);
    TBcleardata->setIconSize(QSize(80, 80));
    TBcleardata->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBcleardata->move(20, 0);

    QIcon TBsoftreseticon;
    TBsoftreseticon.addFile(":/icon/icon/refresh.png");
    TBsoftreset = new QToolButton(this);
    TBsoftreset->resize(110, 110);
    TBsoftreset->setFont(ft);
    TBsoftreset->setText(tr("软复位"));
    TBsoftreset->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBsoftreset->setIcon(TBsoftreseticon);
    TBsoftreset->setIconSize(QSize(80, 80));
    TBsoftreset->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBsoftreset->move(150, 0);

    QIcon TBpowerofficon;
    TBpowerofficon.addFile(":/icon/icon/end.png");
    TBpoweroff = new QToolButton(this);
    TBpoweroff->resize(110, 110);
    TBpoweroff->setFont(ft);
    TBpoweroff->setText(tr("关机"));
    TBpoweroff->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBpoweroff->setIcon(TBpowerofficon);
    TBpoweroff->setIconSize(QSize(80, 80));
    TBpoweroff->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBpoweroff->move(280, 0);

    QIcon TBupdateicon;
    TBupdateicon.addFile(":/icon/icon/top.png");
    TBupdate = new QToolButton(this);
    TBupdate->resize(110, 110);
    TBupdate->setFont(ft);
    TBupdate->setText(tr("软件升级"));
    TBupdate->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBupdate->setIcon(TBupdateicon);
    TBupdate->setIconSize(QSize(80, 80));
    TBupdate->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBupdate->move(410, 0);

    QIcon TBsoftdistoryicon;
    TBsoftdistoryicon.addFile(":/icon/icon/yg.png");
    TBsoftdistory = new QToolButton(this);
    TBsoftdistory->resize(110, 110);
    TBsoftdistory->setFont(ft);
    TBsoftdistory->setText(tr("软销毁"));
    TBsoftdistory->setStyleSheet("background-color:rgba(0,0,0,0)");
    TBsoftdistory->setIcon(TBsoftdistoryicon);
    TBsoftdistory->setIconSize(QSize(80, 80));
    TBsoftdistory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    TBsoftdistory->move(540, 0);

    LAnotice = new QLabel(this);
    LAnotice->setFont(ft);
    LAnotice->setText(tr("这些操作对数据有一定危险性，请谨慎操作。"));
    LAnotice->move(20, 120);

}
