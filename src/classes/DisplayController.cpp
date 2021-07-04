#include "DisplayController.h"

DisplayController::DisplayController() {};

void DisplayController::addDisplayText(string text)
{
    que.push(TextDisplay(text));
};

void DisplayController::tick() 
{
    displayService.show(getNextBits());
};

vector<vector<int8_t>*>* DisplayController::getNextBits() {
    return (*currentDisplay).getBits();
};