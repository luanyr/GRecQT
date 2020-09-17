#ifndef FORM_CLIENT_H
#define FORM_CLIENT_H
#include <QFont>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QIcon>
#include <QGroupBox>
#include <QToolBox>
#include <QLabel>
#include "startmenu.h"
namespace Ui {
class Form_client;
}

class Form_client : public QWidget
{
    Q_OBJECT

public:
    explicit Form_client(QWidget *parent = nullptr);
    ~Form_client();

private:
    Ui::Form_client *ui;
    startmenu *sm;
    /*start menu*/
    QToolBox *TBmenu;

    QWidget *testwidget;
    QWidget *WGTstartmenu;
    void Form_Init();
    void Startmenu_Init();
};

#endif // FORM_CLIENT_H
