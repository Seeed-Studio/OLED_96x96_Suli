/*
 * OLED 96x96 demo - Inverse Display
 * Inverse Display - background is white while the text to display is black
 * Normal Display
 */

#include <Wire.h>
#include <SoftwareSerial.h>

#include "Suli.h"
#include "OLED_96x96_Arduino.h"
#include "OLED_96x96_Suli.h"

SeeedOLED SeeedOled;

void setup()
{

    SeeedOled.init();                           // initialize SEEED OLED display

    SeeedOled.clearDisplay();                   // clear the screen and set start position to top left corner
    SeeedOled.setInverseDisplay();              // Set display to normal mode (i.e non-inverse mode)
    SeeedOled.setVerticalMode();                // Set addressing mode to Page Mode
    SeeedOled.setTextXY(0,0);                   // Set the cursor to Xth Page, Yth Column
    SeeedOled.putString("Hello World!");        // Print the String
}

void loop()
{

}

