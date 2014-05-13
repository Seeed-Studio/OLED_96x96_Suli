/*
 * OLED 96x96 demo - hello world
 */
 
#include <Wire.h>
#include <SoftwareSerial.h>

#include "Suli.h"
#include "OLED_96x96_Arduino.h"
#include "OLED_96x96_Suli.h"

SeeedOLED oled;

void setup()
{
    oled.init();                            // initialze SEEED OLED display
    oled.clearDisplay();                    // clear the screen and set start position to top left corner
    oled.setNormalDisplay();                // Set display to normal mode (i.e non-inverse mode)
    oled.setVerticalMode();                 // Set to vertical mode for displaying text
    
    
    oled.setTextXY(0,0);                    // Set the cursor to Xth Page, Yth Column
    oled.putString("Hello World!");         // Print the String
}

void loop()
{

}

