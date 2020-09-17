#ifndef RECORDMENU_H
#define RECORDMENU_H

#include <QWidget>
#include "widget_headers.h"
namespace Ui {
class recordmenu;
}

class recordmenu : public QWidget
{
    Q_OBJECT

public:
    explicit recordmenu(QWidget *parent = nullptr);
    ~recordmenu();

private:
    Ui::recordmenu *ui;
    QLineEdit *LEfilesz;
    QComboBox *CBfilesz;
    QToolButton *TBfilesz;
    QToolButton *TBchkRec_A;
    QToolButton *TBchkRec_B;
    QToolButton *TBRecStart;
    QToolButton *TBRecStop;
    void Recordmenu_Init();
};

#endif // RECORDMENU_H
