#include "QTpro.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTpro w;
    w.setWindowTitle("С�ƹܼ�(ؤ��)");
    w.resize(960, 540);
    QPushButton* btn1 = new QPushButton("�ر�", &w);
    //btn1->setText("��ө");
    btn1->move(200,200);

    QObject::connect(btn1, &QPushButton::clicked, &w, &QTpro::close);
    w.show();
    return a.exec();
}
