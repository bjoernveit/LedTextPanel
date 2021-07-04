#ifndef DISPLAY_SERVICE_H
#define DISPLAY_SERVICE_H

#include <stdint.h>
#include <vector>
#define FASTLED_ESP8266_RAW_PIN_ORDER
#include <FastLED.h>

#define LED_PIN 14
#define MAX_BRIGHT 16
#define COLOR_ORDER GRB
#define LED_TYPE WS2812
#define HEIGHT_OF_ROW 8
#define NMBR_OF_ROWS 32
#define NUM_LEDS (HEIGHT_OF_ROW * NMBR_OF_ROWS)

using namespace std;

class DisplayService {
private:
  CRGB leds[NUM_LEDS];
public:
    DisplayService();
    void show(vector<vector<int8_t>*>* bits);
};

#endif