/*
 Name:		SvoVar270Lib.cpp
 Created:	1/4/2021 9:09:02 PM
 Author:	lamri
 Editor:	http://www.visualmicro.com
*/
 #if defined(ARDUINO_ARCH_AVR)
 
#include <avr/interrupt.h>
#include <Arduino.h>
#endif
#include "SvoVar270Lib.h"

SvoVar270Lib::SvoVar270Lib() {}

int SvoVar270Lib::GetId() { return this->_id; }