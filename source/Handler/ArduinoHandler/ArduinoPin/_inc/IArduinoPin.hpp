#pragma once
#include <iostream>
#include "EngineApiDatatypes.hpp"
class IArduinoPin
{
public: 
IArduinoPin(uint8_t pin_number);
virtual bool setPinValue(uint8_t pin_number) = 0;
virtual bool setPinMode(ArduinoPinMode pin_mode) = 0;
};