#include "QTpro.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTpro w;
    w.setWindowTitle("小云管家(丐版)");
    w.resize(960, 540);
    QPushButton* btn1 = new QPushButton("关闭", &w);
    //btn1->setText("流萤");
    btn1->move(200,200);

    QObject::connect(btn1, &QPushButton::clicked, &w, &QTpro::close);
    w.show();
    return a.exec();
}
