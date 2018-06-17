/*
  esp8266.cpp - Small Library for my esp2866 functions.
*/

#include <ESP8266WiFi.h>
#include "debug.h"
#include "Arduino.h"
#include "esp8266.h"

void MyESP::chipInfo() {
  #ifdef debugMode
    uint32_t realSize = ESP.getFlashChipRealSize();
    uint32_t ideSize = ESP.getFlashChipSize();
    FlashMode_t ideMode = ESP.getFlashChipMode();
    Serial.println();
    Serial.println("------");
    Serial.printf("Flash real id:   %08X\n", ESP.getFlashChipId());
    Serial.printf("Flash real size: %u\n\n", realSize);
    Serial.printf("Flash ide  size: %u\n", ideSize);
    Serial.printf("Flash ide speed: %u\n", ESP.getFlashChipSpeed());
    Serial.printf("Flash ide mode:  %s\n", (ideMode == FM_QIO ? "QIO" : ideMode == FM_QOUT ? "QOUT" : ideMode == FM_DIO ? "DIO" : ideMode == FM_DOUT ? "DOUT" : "UNKNOWN"));
    Serial.println();
    if(ideSize != realSize) {
        Serial.println("Flash Chip configuration wrong!");
    } else {
        Serial.println("Flash Chip configuration ok.");
    }
    Serial.println("------");
    Serial.println();
  #endif
}

void MyESP::getConfig() { }

