/*
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis
  Modified for ESP8266 platform by Ivan Grokhotkov, 2014-2015.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.h 249 2007-02-03 16:52:51Z mellis $
*/

#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "../generic/common.h"

static const uint8_t SDA = 4;
static const uint8_t SCL = 5;

static const uint8_t LED_BUILTIN   = 16;
static const uint8_t BUILTIN_LED   = 16;
static const uint8_t LED_BUILTIN_R = 12;
static const uint8_t BUILTIN_LEDR  = 12;
static const uint8_t LED_BUILTIN_G = 15;
static const uint8_t BUILTIN_LEDG  = 15;
static const uint8_t LED_BUILTIN_B = 13;
static const uint8_t BUILTIN_LEDB  = 13;
static const uint8_t LED_BUILTIN_1 = 16;
static const uint8_t BUILTIN_LED_1 = 16;
static const uint8_t LED_BUILTIN_2 = 14;
static const uint8_t BUILTIN_LED_2 = 14;
static const uint8_t LED_BUILTIN_3 =  2;
static const uint8_t BUILTIN_LED_3 =  2;
static const uint8_t LED_BUILTIN_4 =  0;
static const uint8_t BUILTIN_LED_4 =  0;
static const uint8_t LED_BUILTIN_5 =  4;
static const uint8_t BUILTIN_LED_5 =  4;
static const uint8_t LED_BUILTIN_6 =  5;
static const uint8_t BUILTIN_LED_6 =  5;

static const uint8_t D0   = 16;
static const uint8_t D1   = 5;
static const uint8_t D2   = 4;
static const uint8_t D3   = 0;
static const uint8_t D4   = 2;
static const uint8_t D5   = 14;
static const uint8_t D6   = 12;
static const uint8_t D7   = 13;
static const uint8_t D8   = 15;
static const uint8_t D9   = 3;
static const uint8_t D10  = 1;

#endif /* Pins_Arduino_h */
