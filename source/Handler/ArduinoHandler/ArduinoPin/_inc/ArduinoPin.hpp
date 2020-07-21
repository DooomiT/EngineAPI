#pragma once
#include "IArduinoPin.hpp"
class ArduinoPin
{
public:
    ArduinoPin(uint8_t &pin_number);
    bool setPinValue(uint8_t &pin_value);
    bool setPinMode(ArduinoPinMode &pin_mode);

private:
    bool checkPinModeRange(uint8_t &value);
    uint8_t m_pin_number;
    uint8_t m_pin_value;
    ArduinoPinMode m_pin_mode;
};