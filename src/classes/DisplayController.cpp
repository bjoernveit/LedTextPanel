#include "DisplayController.h"

DisplayController::DisplayController() {};

void DisplayController::addDisplayText(std::string text)
{
    que.push(TextDisplay(text));
};

void DisplayController::tick() 
{
    displayService.show(getNextBits());
};

std::vector<std::vector<int8_t>*>* DisplayController::getNextBits() {
    return (*currentDisplay).getBits();
};