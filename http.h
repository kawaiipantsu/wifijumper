/*
  http.h - Small Library for doing the HTTP work.
*/

#ifndef HTTP_h
#define HTTP_h

#include <ESP8266HTTPClient.h>
#include "Arduino.h"

class HTTP
{
  public:
    void sendDetails();
    void getConfig();
  private:
    char * userAgent = "WiFi Jumper/1.0 (ESP8266; Arduino) kawaiipantsu/wifijumper";
    char * callback_url = "http://172.30.30.1/wifijumper.php?callback";
    char * config_url = "http://172.30.30.1/wifijumper.php?config";
    const char* httpCodeStr(int response) {
    switch(response) {
        case HTTPC_ERROR_CONNECTION_REFUSED:
            return "Connection lost (refused)";
        case HTTPC_ERROR_SEND_HEADER_FAILED:
            return "Connection lost (header failed)";
        case HTTPC_ERROR_SEND_PAYLOAD_FAILED:
            return "Connection lost (failed payload)";
        case HTTPC_ERROR_NOT_CONNECTED:
            return "Connection lost (disconnected)";
        case HTTPC_ERROR_CONNECTION_LOST:
            return "Connection lost";
        case HTTPC_ERROR_NO_STREAM:
            return "Connection lost (no stream)";
        case HTTPC_ERROR_NO_HTTP_SERVER:
            return "Connection lost (no server)";
        case HTTPC_ERROR_READ_TIMEOUT:
            return "Connection lost (timeout)";
        case HTTP_CODE_FOUND:
            return "HTTP 302 (Redirect)";
        case HTTP_CODE_FORBIDDEN:
            return "HTTP 403 (Forbidden)";
        case HTTP_CODE_NOT_FOUND:
            return "HTTP 404 (Not found)";
        case HTTP_CODE_MOVED_PERMANENTLY:
            return "HTTP 302 (Moved)";
        case HTTP_CODE_INTERNAL_SERVER_ERROR:
            return "HTTP 500 (Error)";
        default:
            return (const char*)response;
    }
}
};

#endif
