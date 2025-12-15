/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "graphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QVBoxLayout *verticalLayout;
    GraphicsView *m_pGraphicsView;

    void setupUi(QWidget *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName("MainWin");
        MainWin->resize(800, 500);
        MainWin->setMinimumSize(QSize(800, 500));
        verticalLayout = new QVBoxLayout(MainWin);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_pGraphicsView = new GraphicsView(MainWin);
        m_pGraphicsView->setObjectName("m_pGraphicsView");

        verticalLayout->addWidget(m_pGraphicsView);


        retranslateUi(MainWin);

        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QWidget *MainWin)
    {
        MainWin->setWindowTitle(QCoreApplication::translate("MainWin", "MainWin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
