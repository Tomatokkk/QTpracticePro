#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTpro.h"
#include <QObject>
#include "CommonConfig.h"
#include <QPushButton>
#include "teacher.h"

class QTpro : public QMainWindow
{
    Q_OBJECT

public:
    void ClassIsOver();
    QTpro(QWidget *parent = nullptr);
    ~QTpro();


private:
    Ui::QTproClass ui;

    teacher* t1;
    
};
