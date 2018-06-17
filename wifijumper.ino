/***
 * __        ___ _____ _       _
 * \ \      / (_)  ___(_)     | |_   _ _ __ ___  _ __   ___ _ __
 *  \ \ /\ / /| | |_  | |  _  | | | | | '_ ` _ \| '_ \ / _ \ '__|
 *   \ V  V / | |  _| | | | |_| | |_| | | | | | | |_) |  __/ |
 *    \_/\_/  |_|_|   |_|  \___/ \__,_|_| |_| |_| .__/ \___|_|
 *                                              |_|
 * 
 * GitHub location: https://github.com/kawaiipantsu/wifijumper 
 * 
 * WiFi Jumper is a small open-wifi jumping leech, spilling it's
 * guts whenever it gets a chance to do so.
 * 
 ***/

/* Include header files and libraries */
#include "debug.h"
#include "Arduino.h"
#include "esp8266.h"
#include "wifi.h"
#include "gps.h"
#include "http.h"

/* Wifi Jumper Setup */
const char deviceID[] = "WJ001";

/* Arduino "Setup" stage 
 *  - This function will be called once as the first thing when 
 *    the bootloader is done.
 */
void setup() {
  Serial.begin(115200);
  MyDebug mydebug;
  MyESP myesp;
  myesp.chipInfo();
  mydebug.output("== WiFI Jumper ==\n");
  mydebug.output("Device ID: ");
  mydebug.output(deviceID);
  mydebug.output("\n");
}

/* Arduino "Loop" stage 
 *  - This function will be looped over and over once the setup() 
 *    function has been run.
 */
void loop() { }
