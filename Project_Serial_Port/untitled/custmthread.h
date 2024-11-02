#ifndef CUSTMTHREAD_H
#define CUSTMTHREAD_H

#include <QWidget>
#include <QThread>
#include "widget.h"

class custmThread : public QThread
{
public:
    custmThread(QWidget *parent);
    void buttons_handler()
    {
        if(btnIndex < 8){
            QPushButton *btn = buttons[btnIndex];
            emit btn->click();
            btnIndex++;
        }else{
            btnIndex = 0;
        }
    }

protected:
    // 每间隔1s发送一次时间信号
    void run() override{
        while(1){
            buttons_handler();
            msleep(ui->spinBox->text().toInt());
        }
    }

private:
    int btnIndex;
};

#endif // CUSTMTHREAD_H
