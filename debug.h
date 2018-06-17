/*
  debug.h - Small debug library for my project
*/

/* DEBUG or Verbose ? */
#define debugMode true      // WiFi Jumper debug mode: We get chip details and extra debug information (need verbose mode)
#define verboseMode true    // WiFi Jumper verbose mode: We "enable" serial console output

#ifndef MyDebug_h
#define MyDebug_h

#include "Arduino.h"

class MyDebug
{
  public:
    void output(const char *x);
    void show(char x[]);
    void show(float x);
    void show(char x);
    void show(int x);
};

#endif



