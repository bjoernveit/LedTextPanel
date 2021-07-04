#include <Arduino.h>

//#include <ESP8266WiFi.h>
//#include <ESP8266WebServer.h>

#include "BitCharacter.h"
#include "DisplayController.h"

DisplayController displayController;

void setup() {
  displayController.addDisplayText("ABCDE");
}

void loop() {
  displayController.tick();
  delay(1000);
}