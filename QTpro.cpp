#include "QTpro.h"


QTpro::QTpro(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

QTpro::~QTpro()
{}

void QTpro::ClassIsOver()
{
    emit t1->hungry();
}