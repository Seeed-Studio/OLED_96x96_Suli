#ifndef __OLED_128x64_ARDUINO_H__
#define __OLED_128x64_ARDUINO_H__

#include <Wire.h>
#include <Arduino.h>

#include "Suli.h"

#include "OLED_96x96_Suli.h"


class SeeedOLED {

public:

    void init()
    {
        oled_96x96_init(&Wire);
    }

    void setNormalDisplay()
    {
        oled_96x96_normal_display();
    }
    
    void setInverseDisplay()
    {
        oled_96x96_inversel_display();
    }
    
    void setHorizontalMode()
    {
        oled_96x96_hmode();
    }

    void setTextXY(unsigned char Row, unsigned char Column)
    {
        oled_96x96_XY(Column, Row);
    }
    
    void clearDisplay()
    {
        oled_96x96_clear();
    }
    
    void setVerticalMode()
    {
        oled_96x96_setVerticalMode();
    }
    
    void setBrightness(unsigned char Brightness)
    {
        oled_96x96_brightness(Brightness);
    }
    
    void putChar(unsigned char c)
    {
        oled_96x96_char(c);
    }

    void putString(const char *String)
    {
        oled_96x96_string(String);
    }

    unsigned char putNumber(long n)
    {
        oled_96x96_num(n);
    }
    
    unsigned char putFloat(float floatNumber,unsigned char decimal)
    {
        oled_96x96_float_decimal(floatNumber, decimal);
    }
    
    unsigned char putFloat(float floatNumber)
    {
        oled_96x96_float(floatNumber);
    }

    void setHorizontalScrollProperties(uint8 direction, uint8 startRow, uint8 endRow, uint8 startColumn, uint8 endColumn, uint8 scrollSpeed)
    {
        oled_96x96_hsp(direction, startRow, endRow, startColumn, endColumn, scrollSpeed);
    }
    
    void activateScroll()
    {
        oled_96x96_active_scroll();
    }
    
    void deactivateScroll()
    {
        oled_96x96_deactive_scroll();
    }

};


#endif