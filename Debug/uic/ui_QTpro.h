/********************************************************************************
** Form generated from reading UI file 'QTpro.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPRO_H
#define UI_QTPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTproClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTproClass)
    {
        if (QTproClass->objectName().isEmpty())
            QTproClass->setObjectName(QStringLiteral("QTproClass"));
        QTproClass->resize(600, 400);
        menuBar = new QMenuBar(QTproClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QTproClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTproClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTproClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QTproClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QTproClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QTproClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTproClass->setStatusBar(statusBar);

        retranslateUi(QTproClass);

        QMetaObject::connectSlotsByName(QTproClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTproClass)
    {
        QTproClass->setWindowTitle(QApplication::translate("QTproClass", "QTpro", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QTproClass: public Ui_QTproClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPRO_H
