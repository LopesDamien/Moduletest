#include "ModuleTestSliderArduino.h"

ModuleTestSliderArduino::ModuleTestSliderArduino(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QObject::connect(&console, &ConsoleMaterielle::channelValueChanged, this, &ModuleTestSliderArduino::onChannelValueUpdate);
    QObject::connect(&console, &ConsoleMaterielle::previousChannel, this, &ModuleTestSliderArduino::previousChannel);
    QObject::connect(&console, &ConsoleMaterielle::nextChannel, this, &ModuleTestSliderArduino::nextChannel);
}

ModuleTestSliderArduino::~ModuleTestSliderArduino()
{}

void ModuleTestSliderArduino::onChannelValueUpdate(int value)
{
    ui.verticalSlider->setValue(value);
}

void ModuleTestSliderArduino::previousChannel()
{
    ui.joystickLabel->setText("left");
}

void ModuleTestSliderArduino::nextChannel()
{
    ui.joystickLabel->setText("right");
}
