#include "mycombobox.h"

#include <QMouseEvent>

myCombobox::myCombobox(QWidget *parent):QComboBox(parent)
{
}

void myCombobox::mousePressEvent(QMouseEvent *e)
{
    //如果是鼠标左键发送信号
    if(e->button() == Qt::LeftButton){
        emit reflesh();
    }

    QComboBox::mousePressEvent(e);
}
