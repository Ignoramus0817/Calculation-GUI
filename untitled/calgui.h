//#define CORE4
//#define CORE8
//#define CORE7

#ifndef CALGUI_H
#define CALGUI_H

#include <QMainWindow>
#include<string.h>

#ifdef CORE4
#include "core4/targetver.h"
#endif

#ifdef CORE7
#include"core7/7_ArithmeticDll.h"
#endif

#ifdef CORE8
#include "core8/core-debugx64/include/core.h"
#endif

namespace Ui {
class CalGUI;
}

class CalGUI : public QMainWindow
{
    Q_OBJECT

public:
    int correctNum=0;
    int i=1;
    std::string *question = new std::string();
    std::string *answer = new std::string();

#ifdef CORE8
    core core8;
#endif

#ifdef CORE7
    arithmetic core7;
#endif

#ifdef CORE4
    Core core4;
#endif

    explicit CalGUI(QWidget *parent = 0);
    ~CalGUI();

private slots:

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_StartButton_clicked();

    void timerUpdate();

    void timeOut();

    void on_qnext_clicked();

    void on_next1_clicked();

private:
    Ui::CalGUI *ui;
};

#endif // CALGUI_H
