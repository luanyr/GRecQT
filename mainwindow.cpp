#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    build_tabwidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::build_tabwidget()
{
    tw = new QTabWidget(this);
    tw->setTabsClosable(true);
    tw->resize(500, 800);
    fc = new Form_client();
//    tw->addTab(fc, "test1");
    fc->show();
}
