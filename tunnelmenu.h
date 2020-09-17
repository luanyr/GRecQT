#ifndef TUNNELMENU_H
#define TUNNELMENU_H

#include <QWidget>
#include "widget_headers.h"
namespace Ui {
class tunnelmenu;
}

class tunnelmenu : public QWidget
{
    Q_OBJECT

public:
    explicit tunnelmenu(QWidget *parent = nullptr);
    ~tunnelmenu();

private:
    Ui::tunnelmenu *ui;
    QLabel *LAmdftunnel;
    QPushButton *PBbacktodef;
    QPushButton *PBconfirm;
    QTabWidget *TWchannel;
    void Tunnelmenu_Init();
};

#endif // TUNNELMENU_H
