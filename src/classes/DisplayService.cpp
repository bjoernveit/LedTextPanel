#include "DisplayService.h"

DisplayService::DisplayService()
{
    FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
}

void DisplayService::show(vector<vector<int8_t>*>* bits)
{
    for (int rowIndex = 0; rowIndex < size(*bits); rowIndex++)
    {
        bool isTopDownRow = rowIndex % 2 == 0;
        vector<int8_t>* row = (*bits)[rowIndex];
        for (int i = 0; i < size(*row); i++)
        {
            int vectorIndexForLed = isTopDownRow ? i : 7 - i;
            bool isLedOff = (*row)[vectorIndexForLed] == 0;

            CRGB::HTMLColorCode color = isLedOff ? CRGB::Black : CRGB::YellowGreen;
            int ledIndex = i + rowIndex * HEIGHT_OF_ROW;

            leds[ledIndex].setColorCode(color);
        };
    }

    FastLED.show();
}