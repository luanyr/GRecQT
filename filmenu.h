#ifndef FILMENU_H
#define FILMENU_H

#include <QWidget>
#include "widget_headers.h"
namespace Ui {
class filmenu;
}

class filmenu : public QWidget
{
    Q_OBJECT

public:
    explicit filmenu(QWidget *parent = nullptr);
    ~filmenu();

private:
    Ui::filmenu *ui;
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
    QToolButton *TBdelfile;
    QToolButton *TBsearchfile;
    void Filmenu_Init();
};

#endif // FILMENU_H
