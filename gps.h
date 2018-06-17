/*
  gps.h - Small Library for my GPS module.
*/

#ifndef GPS_h
#define GPS_h

#include "Arduino.h"

class GPS
{
  public:
    void gpsInit(int pinRead, int pinWrite);
    void getLocation();
    void deviceInfo();
  private:
    int _pin_read;
    int _pin_write;
};

#endif
