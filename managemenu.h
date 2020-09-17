#ifndef MANAGEMENU_H
#define MANAGEMENU_H

#include <QWidget>
#include "widget_headers.h"
namespace Ui {
class managemenu;
}

class managemenu : public QWidget
{
    Q_OBJECT

public:
    explicit managemenu(QWidget *parent = nullptr);
    ~managemenu();

private:
    Ui::managemenu *ui;
    QLabel *LAsettime;
    QPushButton *PBsync;
    QDateTimeEdit *DTEtime;
    QToolButton *TBsendtime;
    QToolButton *TBselfcheck;
    void Managemenu_Init();
};

#endif // MANAGEMENU_H
