/*
  http.cpp - Small Library for doing the HTTP work.
*/

#include <ESP8266HTTPClient.h>
#include "Arduino.h"
#include "http.h"

void HTTP::sendDetails() { 
  HTTPClient http;
  http.setUserAgent(userAgent);
  http.begin(callback_url);
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  http.POST("title=foo&body=bar&userId=1");
  http.writeToStream(&Serial);
  http.end();
}

void HTTP::getConfig() { }
