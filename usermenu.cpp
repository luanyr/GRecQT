#include "usermenu.h"
#include "ui_usermenu.h"

usermenu::usermenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::usermenu)
{
    ui->setupUi(this);
}

usermenu::~usermenu()
{
    delete ui;
}
