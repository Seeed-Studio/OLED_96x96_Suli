/*
  SeeedOLED.cpp - SSD130x OLED Driver Library
  2011 Copyright (c) Seeed Technology Inc.  All right reserved.

  Author: Visweswara R

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef __OLED_128x64_SULI_H__
#define __OLED_128x64_SULI_H__

#include "Suli.h"

#define VERTICAL_MODE                           01
#define HORIZONTAL_MODE                         02

#define SeeedGrayOLED_Address                   (0x3c<<1)
#define SeeedGrayOLED_Command_Mode              0x80
#define SeeedGrayOLED_Data_Mode                 0x40

#define SeeedGrayOLED_Display_Off_Cmd           0xAE
#define SeeedGrayOLED_Display_On_Cmd            0xAF

#define SeeedGrayOLED_Normal_Display_Cmd        0xA4
#define SeeedGrayOLED_Inverse_Display_Cmd       0xA7
#define SeeedGrayOLED_Activate_Scroll_Cmd       0x2F
#define SeeedGrayOLED_Dectivate_Scroll_Cmd      0x2E
#define SeeedGrayOLED_Set_ContrastLevel_Cmd     0x81

#define Scroll_Left                             0x00
#define Scroll_Right                            0x01

#define Scroll_2Frames                          0x7
#define Scroll_3Frames                          0x4
#define Scroll_4Frames                          0x5
#define Scroll_5Frames                          0x0
#define Scroll_25Frames                         0x6
#define Scroll_64Frames                         0x1
#define Scroll_128Frames                        0x2
#define Scroll_256Frames                        0x3


void oled_96x96_init(void * I2C_Device);
// send command
void oled_96x96_cmd(unsigned char command);
// send data
void oled_96x96_dta(unsigned char Data);
void oled_96x96_brightness(unsigned char Brightness);
// horizontal mode
void oled_96x96_hmode();
// page mode
void oled_96x96_setVerticalMode();
void oled_96x96_XY(unsigned char Row, unsigned char Column);
void oled_96x96_clear();
void oled_96x96_char(unsigned char C);
void oled_96x96_string(const char *String);
unsigned char oled_96x96_num(long long_num);
unsigned char oled_96x96_float_decimal(float floatNumber,unsigned char decimal);
unsigned char oled_96x96_float(float floatNumber);

/*
 * set Horizontal Scroll Properties
 */
void oled_96x96_hsp(uint8 direction, uint8 startRow, uint8 endRow, uint8 startColumn, uint8 endColumn, uint8 scrollSpeed);
/*
 * active scroll
 */
void oled_96x96_active_scroll();
void oled_96x96_deactive_scroll();
void oled_96x96_normal_display();
void oled_96x96_inversel_display();

#endif