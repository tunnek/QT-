#ifndef WIDGET_H
#define WIDGET_H

#include <QCheckBox>
#include <QFile>
#include <QPushButton>
#include <QSerialPort>
#include <QTimer>
#include <QWidget>
#include "mycombobox.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
    //打开/关闭按键槽函数
    void on_btn_CloseOrOpenSerial_clicked(bool checked);
    //发送按键槽函数
    void on_pushButton_send_clicked();
    //接受数据槽函数
    void on_SerialData_reched();
    //保存按键槽函数
    void on_pushButton_save_clicked();
    //载入按键槽函数
    void on_pushButton_load_clicked();
    //重置按键槽函数
    void on_pushButton_reset_clicked();
    //保存接受按键槽函数
    void on_pushButton_saveRev_clicked();
    //定时发送槽函数
    void on_checkBox_timeSend_clicked(bool checked);
    //定时器2超时槽函数
    void getSysTime();
    //Hex显示槽函数
    void on_checkBox_hexDisplay_clicked(bool checked);
    //隐藏面板槽函数
    void on_pushButton_hidePanel_clicked(bool checked);
    //隐藏历史槽函数
    void on_pushButton_hideHistory_clicked(bool checked);
    //刷新串口信息槽函数
    void refreshSerialName();

    
    void on_command_button_clicked();

    void on_checkBox_cirSend_clicked(bool checked);

    //定时器3超时槽函数
    void buttons_handler();

private:
    Ui::Widget *ui;
    QSerialPort *serialPort;     //串口
    QTimer* timer;               //定时器1
    QTimer* getSysTimeTimer;
    QFile file;
    int WriteCntTotal; //发送字节数
    int RevCntTotal;   //接受字节数
    //用于比较发送记录
    QString sendBak;
    //用于实时获取系统时间
    QString currentTime;

    QList<QPushButton *> buttons;
    QList<QLineEdit *> lineEdits;
    QList<QCheckBox *> checkBoxs;

    QTimer* timer3;
    int btnIndex;
    int mytime;
};

#endif // WIDGET_H
