#ifndef DISPLAY_CONTROLLER_H
#define DISPLAY_CONTROLLER_H

#include <string>
#include <queue>
#include "TextDisplay.h"
#include "DisplayService.h"

class DisplayController
{
private:
    DisplayService displayService;
    std::queue<TextDisplay> que;
    TextDisplay *currentDisplay;
    std::vector<std::vector<int8_t> *> *getNextBits();

public:
    DisplayController();
    void addDisplayText(std::string text);
    void tick();
};

#endif