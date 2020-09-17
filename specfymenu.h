#ifndef SPECFYMENU_H
#define SPECFYMENU_H

#include <QWidget>
#include "widget_headers.h"
namespace Ui {
class specfymenu;
}

class specfymenu : public QWidget
{
    Q_OBJECT

public:
    explicit specfymenu(QWidget *parent = nullptr);
    ~specfymenu();

private:
    Ui::specfymenu *ui;
    QToolButton *TBcleardata;
    QToolButton *TBsoftreset;
    QToolButton *TBpoweroff;
    QToolButton *TBupdate;
    QToolButton *TBsoftdistory;
    QLabel *LAnotice;
    void specfymenu_Init();
};

#endif // SPECFYMENU_H
