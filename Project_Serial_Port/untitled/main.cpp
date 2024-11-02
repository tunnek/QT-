#include "widget.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    //设置高DPI缩放属性
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    //创建Qt应用程序对象
    QApplication a(argc, argv);
    //设置本地文本编解码方式为GBK
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    Widget w;
    w.show();
    return a.exec();
}
