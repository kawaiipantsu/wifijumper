/*
  debug.cpp - Small debug library for my project
*/

#include "Arduino.h"
#include "debug.h"

void MyDebug::output(const char *x) { 
  #ifdef debugMode
    Serial.print(x);
  #endif
}

void MyDebug::show(char x[]) { 
  #ifdef debugMode
    Serial.print(F("char[]: "));
    Serial.print(x);
    Serial.println(F(""));
  #endif
}

void MyDebug::show(float x){
  #ifdef debugMode
    Serial.print(F("float: "));
    Serial.print(x);
    Serial.println(F(""));
  #endif
}

void MyDebug::show(char x){
  #ifdef debugMode
    Serial.print(F("char: "));
    Serial.print(x);
    Serial.println(F(""));
  #endif
}

void MyDebug::show(int x){
  #ifdef debugMode
    Serial.print("int: ");
    Serial.print(x);
    Serial.println("");
  #endif
}
