#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ModuleTestSliderArduino.h"
#include "ConsoleMaterielle.h"

class ModuleTestSliderArduino : public QMainWindow
{
    Q_OBJECT

        ConsoleMaterielle console;

public:
    ModuleTestSliderArduino(QWidget* parent = nullptr);
    ~ModuleTestSliderArduino();

private:
    Ui::ModuleTestSliderArduinoClass ui;

private slots:
    void onChannelValueUpdate(int value);
    void previousChannel(); // D�claration de la fonction joystickMovedLeft
    void nextChannel(); // D�claration de la fonction joystickMovedRight
    void onConfirmButtonPressed();
};
