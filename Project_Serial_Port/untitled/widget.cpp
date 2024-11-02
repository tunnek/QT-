#include "widget.h"
#include "ui_widget.h"

#include <QDateTime>
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>
#include <QByteArray>
#include <QFileDialog>
#include <QObject>
#include <QThread>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    serialPort = new QSerialPort(this); // 串口
    timer = new QTimer(this);           // 定时器

    WriteCntTotal = 0;                  // 发送总字节数
    RevCntTotal = 0;                    // 接受总字节数
    btnIndex = 0;
    mytime = 0;

    // 1. 设置Frame窗体的样式
    ui->frame_all->setFrameShape(QFrame::Box);
    ui->frame_all->setFrameShadow(QFrame::Raised);

    ui->frame_1->setFrameShape(QFrame::Box);
    ui->frame_1->setFrameShadow(QFrame::Raised);

    ui->frame_2->setFrameShape(QFrame::Box);
    ui->frame_2->setFrameShadow(QFrame::Raised);

    ui->frame_3->setFrameShape(QFrame::Box);
    ui->frame_3->setFrameShadow(QFrame::Raised);

    // 2. 组件随着窗口大小变化而改变
    this->setLayout(ui->gridLayout_3);
    ui->frame_all->setLayout(ui->horizontalLayout);

    // 4. 获取系统中所有串口信息
    QList<QSerialPortInfo> serialList = QSerialPortInfo::availablePorts();

    // 使用 qDebug 输出串口信息
    for (const QSerialPortInfo &serialinfo : serialList) { // 使用 const 引用
        qDebug() << "Port Name:" << serialinfo.portName();
        ui->comboBox_01->addItem(serialinfo.portName());
    }

    // 5. 设置QComboBox索引
    if (ui->comboBox_02->count() > 6) { // 确保索引在范围内
        ui->comboBox_02->setCurrentIndex(6);
    }
    if (ui->comboBox_03->count() > 1) { // 确保索引在范围内
        ui->comboBox_03->setCurrentIndex(1);
    }

    // 设置按钮为可检查
    ui->btn_CloseOrOpenSerial->setCheckable(true);
    ui->pushButton_hidePanel->setCheckable(true);
    ui->pushButton_hideHistory->setCheckable(true);

    connect(serialPort, &QSerialPort::readyRead, this, &Widget::on_SerialData_reched);     //连接打开按键的点击信号与槽函数 --
    connect(timer, &QTimer::timeout, this, [=](){                                          //连接定时器1超时信号与槽函数 --
        on_pushButton_send_clicked();
    });
    getSysTimeTimer = new QTimer(this);
    getSysTimeTimer->setInterval(1000);                                                    //设置定时器2的间隔时间（毫秒）
    connect(getSysTimeTimer, &QTimer::timeout, this, &Widget::getSysTime);                 //连接定时器2超时信号与槽函数 --
    getSysTimeTimer->start();                                                              //启动定时器2
    connect(ui->pushButton_clearRev, &QPushButton::clicked, this, [=](){                          //连接清空接受按键点击信号与槽函数 --
        ui->textEdit_Rev->clear();
    });
    connect(ui->comboBox_01, &myCombobox::reflesh, this, &Widget::refreshSerialName);      //连接刷新信号与槽函数 --


    ui->checkBox_timeSend->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    ui->checkBox_sendEnter->setEnabled(false);
    ui->checkBox_sendHex->setEnabled(false);
    ui->checkBox_16->setEnabled(false);
    ui->pushButton_send->setEnabled(false);

    for(int i = 1; i <= 8; i++){
        QString btnName = QString("pushButton_%1").arg(i);                        //生成按键名字
        QPushButton* btn = findChild<QPushButton *>(btnName);                     //查找组件中是否有该名字的按键，若有，将指针指向该按键
        if(btn){
            btn->setProperty("buttonId",i);                                       //给该按键添加属性
            buttons.append(btn);                                                  //将该按键添加到容器中
            connect(btn,SIGNAL(clicked()),this,SLOT(on_command_button_clicked()));//给该按键连接信号与槽函数
        }

        QString lineEditName = QString("lineEdit_%1").arg(i);                     //生成输入框名字
        QLineEdit *lineEdit = findChild<QLineEdit *>(lineEditName);               //查找组件中是否有该名字的输入框，若有，将指针指向该输入框
        lineEdits.append(lineEdit);                                               //将该输入框添加到容器中

        QString checkBoxName = QString("checkBox_%1").arg(i);                     //生成checkboBox名字
        QCheckBox *checkBox = findChild<QCheckBox *>(checkBoxName);               //查找组件中是否有该名字的checkboBox，若有，将指针指向该checkboBox
        checkBoxs.append(checkBox);                                               //将该checkboBox添加到容器中

    }

    timer3 = new QTimer(this);
    connect(timer3, &QTimer::timeout, this, &Widget::buttons_handler);

}

// 析构函数
Widget::~Widget()
{
    if (serialPort->isOpen()) {
        serialPort->close();
    }
    delete serialPort;
    delete timer;
    delete getSysTimeTimer;
    delete ui;
}

// 定时器超时槽函数
void Widget::getSysTime()
{
    // 获取当前时间
    QDateTime dataTime = QDateTime::currentDateTime();
    QDate date = dataTime.date();
    QTime time = dataTime.time();

    // 提取年、月、日、时、分、秒
    int year   = date.year();
    int month  = date.month();
    int day    = date.day();
    int hour   = time.hour();
    int minute = time.minute();
    int second = time.second();

    // 将时间拼装起来，确保月份和日期、小时、分钟、秒钟都是双位数
    currentTime = QString("%1-%2-%3 %4:%5:%6")
        .arg(year)
        .arg(month, 2, 10, QChar('0'))  // 确保月是两位数
        .arg(day, 2, 10, QChar('0'))    // 确保日是两位数
        .arg(hour, 2, 10, QChar('0'))   // 确保小时是两位数
        .arg(minute, 2, 10, QChar('0')) // 确保分钟是两位数
        .arg(second, 2, 10, QChar('0')); // 确保秒钟是两位数

    // 更新标签显示时间
    ui->label_nowTime->setText(currentTime);
}


//打开/关闭串口槽函数
void Widget::on_btn_CloseOrOpenSerial_clicked(bool checked)
{
    if (checked) {
        // 选择端口号
        serialPort->setPortName(ui->comboBox_01->currentText());

        // 配置波特率
        serialPort->setBaudRate(ui->comboBox_02->currentText().toInt());

        // 配置数据位
        serialPort->setDataBits(QSerialPort::DataBits(ui->comboBox_03->currentText().toUInt()));

        // 配置校验位
        switch (ui->comboBox_04->currentIndex()) {
            case 0:
                serialPort->setParity(QSerialPort::NoParity);
                break;
            case 1:
                serialPort->setParity(QSerialPort::EvenParity);
                break;
            case 2:
                serialPort->setParity(QSerialPort::MarkParity);
                break;
            case 3:
                serialPort->setParity(QSerialPort::OddParity);
                break;
            case 4:
                serialPort->setParity(QSerialPort::SpaceParity);
                break;
            default:
                serialPort->setParity(QSerialPort::UnknownParity);
                break;
        }

        // 配置停止位
        switch (ui->comboBox_05->currentIndex()) {
            case 0:
                serialPort->setStopBits(QSerialPort::OneStop);
                break;
            case 1:
                serialPort->setStopBits(QSerialPort::OneAndHalfStop);
                break;
            case 2:
                serialPort->setStopBits(QSerialPort::TwoStop);
                break;
            default:
                serialPort->setStopBits(QSerialPort::UnknownStopBits);
                break;
        }

        // 流控配置
        if (ui->comboBox_06->currentText() == "None") {
            serialPort->setFlowControl(QSerialPort::NoFlowControl);
        }

        // 在尝试打开之前，先检查串口是否已经打开
        if (serialPort->isOpen()) {
            qDebug() << "Serial port is already open.";
            return; // 如果已经打开，返回
        }

        // 打开串口
        if (serialPort->open(QIODevice::ReadWrite)) {
            qDebug() << "serial open success";
            ui->comboBox_01->setEnabled(false);
            ui->comboBox_02->setEnabled(false);
            ui->comboBox_03->setEnabled(false);
            ui->comboBox_04->setEnabled(false);
            ui->comboBox_05->setEnabled(false);
            ui->comboBox_06->setEnabled(false);
            ui->pushButton_send->setEnabled(true);

            ui->checkBox_timeSend->setEnabled(true);
            ui->lineEdit->setEnabled(true);
            ui->checkBox_sendEnter->setEnabled(true);
            ui->checkBox_sendHex->setEnabled(true);
            ui->checkBox_16->setEnabled(true);
            ui->btn_CloseOrOpenSerial->setText("关闭串口");
        } else {
            QMessageBox msgBox;
            msgBox.setWindowTitle("打开串口错误");
            msgBox.setText("打开失败，串口可能被占用或者已拔出！");
            msgBox.exec();
        }
    } else {
        // 关闭串口后，设置各个控件的使能，恢复可配置状态
        serialPort->close();
        ui->btn_CloseOrOpenSerial->setText("打开串口");
        ui->comboBox_01->setEnabled(true);
        ui->comboBox_02->setEnabled(true);
        ui->comboBox_03->setEnabled(true);
        ui->comboBox_04->setEnabled(true);
        ui->comboBox_05->setEnabled(true);
        ui->comboBox_06->setEnabled(true);
        ui->pushButton_send->setEnabled(false);

        ui->checkBox_timeSend->setEnabled(false);
        ui->lineEdit->setEnabled(false);
        ui->checkBox_sendEnter->setEnabled(false);
        ui->checkBox_sendHex->setEnabled(false);
        ui->checkBox_16->setEnabled(false);
        ui->pushButton_send->setEnabled(false);
    }
}

// 发送按键槽函数
void Widget::on_pushButton_send_clicked()
{
    int WriteCnt = 0;
    QString sendData = ui->lineEdit_sendData->text();
    //Hex发送是否勾选，此处为勾选
    if(ui->checkBox_sendHex->isChecked()){
        QByteArray tmpArray = ui->lineEdit_sendData->text().toLocal8Bit();
        //检查字节数是否是偶数
        if(tmpArray.size() % 2 != 0){
            ui->label_5->setText("input error!");
            return;
        }
        //检查是否符合16进制表达
        for(char c:tmpArray){
            if(!std::isxdigit(c)){
                ui->label_5->setText("input error!");
                return;
            }
        }

        //检查是否添加新行
        if(ui->checkBox_sendEnter->isChecked()){
            tmpArray = tmpArray.append("\r\n");
        }
        //转化为16进制发送
        QByteArray tmp = QByteArray::fromHex(tmpArray);

        WriteCnt = serialPort->write(tmp);

    }else{
        QByteArray data = sendData.toLocal8Bit();
        //检查是否添加新行
        if(ui->checkBox_sendEnter->isChecked()){
            data = data.append("\r\n");
        }
        WriteCnt = serialPort->write(data);
    }

    if(WriteCnt == -1){
        ui->label_5->setText("Send false!");
    }else{
        ui->label_5->setText("Send Ok!");
        ui->label_4->setText("Send: " + QString::number(WriteCntTotal));

        if(0 != strcmp(sendBak.toLocal8Bit().constData(), sendData.toLocal8Bit().constData())){
            ui->textEdit_Record->append(sendData);
            sendBak = sendData;
        }
    }

}


void Widget::on_SerialData_reched()
{
    QString revData = serialPort->readAll(); // 读取所有可用的数据
    qDebug() << "接受到的新数据为:" << revData;

    if(revData.isEmpty()) {
        return; // 没有数据则返回
    }

    // 检查数据是否为换行符，如果是则不显示时间
    if (revData.trimmed() == "\r\n" || revData.trimmed() == "\n") {
        return; // 如果接收到的是换行符，则直接返回
    }

    // a.是否勾选自动换行
    if(ui->checkBox_autoEnter->isChecked()) revData.append("\r\n");

    // 更新接收长度
    RevCntTotal += revData.size(); // 统计接收到的字节数
    ui->label_7->setText("Rev OK!");
    ui->label_3->setText("Rev: " + QString::number(RevCntTotal));

    // 处理 HEX 显示
    if(ui->checkBox_hexDisplay->isChecked()){
        QByteArray tmpHexString = revData.toUtf8().toHex().toUpper();
        ui->textEdit_Rev->append(tmpHexString);
    } else {
        if(ui->checkBox_revTime->isChecked()) {
            getSysTime(); // 获取时间
            ui->textEdit_Rev->append("【" + currentTime + "】 " + revData);
        } else {
            ui->textEdit_Rev->append(revData);
        }
    }
}



// 保存按键槽函数
void Widget::on_pushButton_save_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("保存文件"),
                                "C:/Users/mi/Desktop/untitled.txt",
                                tr("Text files (*.txt *.doc)"));

    if (fileName.isEmpty()) {
        qDebug() << "No file selected";
        return;
    }

    file.setFileName(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        qDebug() << "File open error";
        QMessageBox::warning(this, "错误", "无法打开文件以进行写入");
        return;
    }

    QTextStream out(&file);
    out << ui->lineEdit_1->text() << '\n'
        << ui->lineEdit_2->text() << '\n'
        << ui->lineEdit_3->text() << '\n'
        << ui->lineEdit_4->text() << '\n'
        << ui->lineEdit_5->text() << '\n'
        << ui->lineEdit_6->text() << '\n'
        << ui->lineEdit_7->text() << '\n'
        << ui->lineEdit_8->text();

    file.close(); // 关闭文件
    QMessageBox::information(this, "提示！", "文件已保存");
}

// 载入按键槽函数
void Widget::on_pushButton_load_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("打开文件"),
                                                "C:/Users/mi/Desktop/Qt Project",
                                                tr("Text files (*.txt)"));

    if (fileName.isEmpty()) {
        qDebug() << "No file selected";
        return;
    }

    file.setFileName(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "File open error";
        QMessageBox::warning(this, "错误", "无法打开文件以进行读取");
        return;
    }

    QLineEdit* lineEdits[] = {ui->lineEdit_1, ui->lineEdit_2, ui->lineEdit_3,
                               ui->lineEdit_4, ui->lineEdit_5,
                               ui->lineEdit_6, ui->lineEdit_7,
                               ui->lineEdit_8};

    for(int i = 0; i < 8; i++){
        lineEdits[i]->clear();
    }

    QTextStream in(&file);


    int sum = 0;
    while (!in.atEnd()) {
        if (sum < 8) { // 确保不超出范围
            QString line = in.readLine();
            lineEdits[sum]->setText(line); // 设置文本
            sum++;
        } else {
            in.readLine(); // 如果行数超过8，继续读取但不设置
        }
    }

    file.close(); // 关闭文件
}

// 重置按键槽函数
void Widget::on_pushButton_reset_clicked()
{
    QLineEdit* lineEdits[] = {ui->lineEdit_1, ui->lineEdit_2, ui->lineEdit_3,
                               ui->lineEdit_4, ui->lineEdit_5,
                               ui->lineEdit_6, ui->lineEdit_7,
                               ui->lineEdit_8};

    for(int i = 0; i < 8; i++){
        lineEdits[i]->clear();
    }
}

// 保存接受按键槽函数
void Widget::on_pushButton_saveRev_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("保存文件"),
                                "C:/Users/mi/Desktop/untitled.txt",
                                tr("Text files (*.txt *.doc)"));

    if (fileName.isEmpty()) {
        qDebug() << "No file selected";
        return;
    }

    file.setFileName(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        qDebug() << "File open error";
        QMessageBox::warning(this, "错误", "无法打开文件以进行写入");
        return;
    }

    QTextStream out(&file);
    out << ui->textEdit_Rev->toPlainText();

    file.close(); // 关闭文件
    QMessageBox::information(this, "提示！", "文件已保存");
}

// 定时发送槽函数
void Widget::on_checkBox_timeSend_clicked(bool checked)
{
    int time = ui->lineEdit->text().toInt();           // 检测用户定义的多少ms/次
    timer->setInterval(time);                            // 设置定时器的间隔时间（毫秒）
    if(checked){
        timer->start();                                  // 启动定时器
    }else{
        timer->stop();                                   // 停止定时器
    }
}


// Hex显示槽函数
void Widget::on_checkBox_hexDisplay_clicked(bool checked)
{
    if (checked) {
        // 获取原始文本
        QString revDisplay = ui->textEdit_Rev->toPlainText();          // QString    \x01\x02\x03

        // 转换为 Hex 表示
        QByteArray byteArray = revDisplay.toUtf8(); // 转换为字节数组
        byteArray = byteArray.toHex(); // 转换为 Hex 字符串             //QByteArray    010203

        QString lastShow;
        revDisplay = QString::fromUtf8(byteArray);                    //QString       010203
        for(int i=0; i<revDisplay.size();i+=2){
            lastShow += revDisplay.mid(i,2) + " ";
        }
        // 设置文本为 Hex
        ui->textEdit_Rev->setText(lastShow);
    } else {
        // 获取 Hex 文本
        QString hexDisplay = ui->textEdit_Rev->toPlainText();

        // 将 Hex 转换回原始字符串
        QByteArray byteArray = QByteArray::fromHex(hexDisplay.toUtf8());
        QString normalDisplay = QString::fromUtf8(byteArray);

        // 设置文本为正常字符串
        ui->textEdit_Rev->setText(normalDisplay);
    }
}

//隐藏面板槽函数
void Widget::on_pushButton_hidePanel_clicked(bool checked)
{
    if(checked){
        ui->groupBox_MoreText->hide();
        ui->pushButton_hidePanel->setText("打开面板");
    }else{
        ui->groupBox_MoreText->show();
        ui->pushButton_hidePanel->setText("隐藏面板");
    }
}

//隐藏历史槽函数
void Widget::on_pushButton_hideHistory_clicked(bool checked)
{
    if(checked){
        ui->groupBox_Record->hide();
        ui->pushButton_hideHistory->setText("打开历史");
    }else{
        ui->groupBox_Record->show();
        ui->pushButton_hideHistory->setText("隐藏历史");
    }
}

//刷新串口信息槽函数
void Widget::refreshSerialName()
{
    ui->comboBox_01->clear();
    // 获取系统中所有串口信息
    QList<QSerialPortInfo> serialList = QSerialPortInfo::availablePorts();

    // 使用 qDebug 输出串口信息
    for (const QSerialPortInfo &serialinfo : serialList) { // 使用 const 引用
        qDebug() << "Port Name:" << serialinfo.portName();
        ui->comboBox_01->addItem(serialinfo.portName());
    }
}


void Widget::on_command_button_clicked() {
    // 通过 sender() 函数获取发出信号的对象，在通过 qobject_cast<> 方法进行类型转换
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    if (btn) {
        // 获取按键的属性 buttonId 的值，并转换为整数
        int num = btn->property("buttonId").toInt();

        // 根据 buttonId 构造与之对应的 QLineEdit 对象的名称
        QString lineEditName = QString("lineEdit_%1").arg(num);
        QLineEdit *lineEdit = findChild<QLineEdit *>(lineEditName);
        if (lineEdit) {
            if (lineEdit->text().isEmpty()) {
                return; // 如果文本为空，直接返回，不发送
            }
            ui->lineEdit_sendData->setText(lineEdit->text());
        }

        // 根据 buttonId 构造与之对应的 QCheckBox 对象的名称
        QString hexName = QString("checkBox_%1").arg(num);
        QCheckBox *checkBox = findChild<QCheckBox *>(hexName);
        ui->checkBox_sendHex->setChecked(checkBox ? checkBox->isChecked() : false); // 确保 checkBox 存在后再获取状态

        // 只有在 lineEdit 有内容的情况下发送数据
        on_pushButton_send_clicked();
    }
}

void Widget::on_checkBox_cirSend_clicked(bool checked)
{
    if(checked){
        //设置定时器定时时间
        timer3->setInterval(ui->spinBox->text().toInt());
        //启动定时器
        timer3->start();
    }else{
        //停止定时器
        timer3->stop();
    }
}

void Widget::buttons_handler()
{
    if(btnIndex < 8){
        QPushButton *btn = buttons[btnIndex];
        emit btn->click();
        btnIndex++;
    }else{
        btnIndex = 0;
    }
}
