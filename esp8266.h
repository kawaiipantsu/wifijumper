/*
  esp8266.h - Small Library for my esp2866 functions.
*/

#ifndef MyESP_h
#define MyESP_h

#include "Arduino.h"

class MyESP
{
  public:
    void chipInfo();
    void getConfig();
};

#endif
