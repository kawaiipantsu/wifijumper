/*
  http.h - Small Library for doing the HTTP work.
*/

#ifndef HTTP_h
#define HTTP_h

#include "Arduino.h"

class HTTP
{
  public:
    void sendDetails();
    void getConfig();
  private:
    char * callback_url;
    char * config_url;
};

#endif
