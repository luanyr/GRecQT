#ifndef STARTMENU_H
#define STARTMENU_H

#include <QWidget>
#include "widget_headers.h"
namespace Ui {
class startmenu;
}

class startmenu : public QWidget
{
    Q_OBJECT

public:
    explicit startmenu(QWidget *parent = nullptr);
    ~startmenu();

private:
    Ui::startmenu *ui;
    QLabel *LAipaddr;
    QLabel *LAport;
    QLineEdit *LEipaddr;
    QLineEdit *LEport;
    QToolButton *TBconnect;
    QToolButton *TBdisconnect;
    QLabel *LAusrname;
    QLabel *LApswd;
    QLineEdit *LEusrname;
    QLineEdit *LEpswd;
    QToolButton *TBlogin;
    QToolButton *TBlogout;
    QToolButton *TBcloseapp;
    void Startmenu_Init();
};

#endif // STARTMENU_H
