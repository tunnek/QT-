#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QComboBox>

class myCombobox : public QComboBox
{
    Q_OBJECT
public:
    myCombobox(QWidget *parent);
protected:
    void mousePressEvent(QMouseEvent *e) override;

signals:
    void reflesh();  //刷新
};

#endif // MYCOMBOBOX_H
