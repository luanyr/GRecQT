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
    fc = new Form_client();
    fc->show();
}
