/*
  wifi.h - Small Library for my WiFi Jumper functions.
*/

#ifndef WifiJumper_h
#define WifiJumper_h

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include "Arduino.h"

class WifiJumper
{
  public:
    void WifiJumperInit();
    void disNetwork();
    void getNetworks();
  private:
    boolean wifiConnected = true;
    boolean inetConnected = false;
    boolean wifiOkay = false;
    int waitingCount = 0;
    int waitingCountTotal = 0;
    int errorCountTotal = 0;
    uint8_t encryptionType;
    int32_t RSSI;
    uint8_t* BSSID;
    int32_t channel;
    bool isHidden;
};

#endif
