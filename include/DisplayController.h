#ifndef DISPLAY_CONTROLLER_H
#define DISPLAY_CONTROLLER_H

#include <string>
#include <queue>
#include "TextDisplay.h"
#include "DisplayService.h"

using namespace std;

class DisplayController {
private:
    DisplayService displayService;
    queue<TextDisplay> que;
    TextDisplay* currentDisplay;
    vector<vector<int8_t>*>* getNextBits();
public:
    DisplayController();
    void addDisplayText(string text);
    void tick();
};

#endif