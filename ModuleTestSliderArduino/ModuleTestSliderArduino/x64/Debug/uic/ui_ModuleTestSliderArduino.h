/********************************************************************************
** Form generated from reading UI file 'ModuleTestSliderArduino.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULETESTSLIDERARDUINO_H
#define UI_MODULETESTSLIDERARDUINO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModuleTestSliderArduinoClass
{
public:
    QWidget *centralWidget;
    QSlider *verticalSlider;
    QLabel *joystickLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ModuleTestSliderArduinoClass)
    {
        if (ModuleTestSliderArduinoClass->objectName().isEmpty())
            ModuleTestSliderArduinoClass->setObjectName(QString::fromUtf8("ModuleTestSliderArduinoClass"));
        ModuleTestSliderArduinoClass->resize(600, 400);
        centralWidget = new QWidget(ModuleTestSliderArduinoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(90, 60, 22, 160));
        verticalSlider->setMaximum(255);
        verticalSlider->setOrientation(Qt::Vertical);
        joystickLabel = new QLabel(centralWidget);
        joystickLabel->setObjectName(QString::fromUtf8("joystickLabel"));
        joystickLabel->setGeometry(QRect(210, 140, 47, 13));
        joystickLabel->setLayoutDirection(Qt::LeftToRight);
        ModuleTestSliderArduinoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ModuleTestSliderArduinoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        ModuleTestSliderArduinoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ModuleTestSliderArduinoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ModuleTestSliderArduinoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ModuleTestSliderArduinoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ModuleTestSliderArduinoClass->setStatusBar(statusBar);

        retranslateUi(ModuleTestSliderArduinoClass);

        QMetaObject::connectSlotsByName(ModuleTestSliderArduinoClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModuleTestSliderArduinoClass)
    {
        ModuleTestSliderArduinoClass->setWindowTitle(QCoreApplication::translate("ModuleTestSliderArduinoClass", "ModuleTestSliderArduino", nullptr));
        joystickLabel->setText(QCoreApplication::translate("ModuleTestSliderArduinoClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModuleTestSliderArduinoClass: public Ui_ModuleTestSliderArduinoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULETESTSLIDERARDUINO_H
