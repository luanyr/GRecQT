#ifndef USERMENU_H
#define USERMENU_H

#include <QWidget>
#include "widget_headers.h"
namespace Ui {
class usermenu;
}

class usermenu : public QWidget
{
    Q_OBJECT

public:
    explicit usermenu(QWidget *parent = nullptr);
    ~usermenu();

private:
    Ui::usermenu *ui;
    QLabel *LAusername;
    QLabel *LAuserpswd;
    QLineEdit *LEusername;
    QLineEdit *LEuserpwsd;
    QToolButton *TBcreatuser;
    QToolButton *TBmodifypsdw;
    QToolButton *TBdeluser;
    void Usermenu_Init();
};

#endif // USERMENU_H
