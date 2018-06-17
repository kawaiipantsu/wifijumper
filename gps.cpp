/*
  gps.cpp - Small Library for my GPS module.
*/

#include "Arduino.h"
#include "gps.h"

void GPS::gpsInit(int pinRead, int pinWrite) {
  pinMode(pinWrite, OUTPUT);
  pinMode(pinRead, INPUT);
  _pin_read = pinRead;
  _pin_write = pinWrite;
}

void GPS::getLocation() { }

void GPS::deviceInfo() { }
