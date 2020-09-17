#ifndef REPMENU_H
#define REPMENU_H

#include <QWidget>
#include "widget_headers.h"
namespace Ui {
class repmenu;
}

class repmenu : public QWidget
{
    Q_OBJECT

public:
    explicit repmenu(QWidget *parent = nullptr);
    ~repmenu();

private:
    Ui::repmenu *ui;
    QPushButton *PBchkchnselreplay;
    QToolButton *TBchkReplayA;
    QToolButton *TBchkReplayB;
    QPushButton *PBcjkTimeSelReplay;
    QLabel *LAstarttime;
    QLabel *LAendtime;
    QDateTimeEdit *DTEstarttime;
    QDateTimeEdit *DTEendtime;
    QPushButton *PBchktypeSelReplay;
    QPushButton *PBtype1;
    QPushButton *PBtype2;
    QPushButton *PBtype3;
    QPushButton *PBtype4;
    QPushButton *PBchkChanSelReplay;
    QComboBox *CBXoutcom;
    QToolButton *TBreplay;
    QToolButton *TBpause;
    QToolButton *TBstop;
    QLine *line1;
    QLine *line2;
    QLine *line3;
    QLine *line4;
    void repmenu_Init();
};

#endif // REPMENU_H
