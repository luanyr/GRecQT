#ifndef USERMENU_H
#define USERMENU_H

#include <QWidget>

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
};

#endif // USERMENU_H
