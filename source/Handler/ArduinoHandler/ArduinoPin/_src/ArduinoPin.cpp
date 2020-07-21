#include "ArduinoPin.hpp"

ArduinoPin::ArduinoPin(uint8_t &pin_number)
    : m_pin_number(pin_number),
      m_pin_value(0),
      m_pin_mode(ArduinoPinMode::INPUT) {}

bool ArduinoPin::setPinValue(uint8_t &pin_value)
{
    m_pin_value = pin_value;
    //TODO Rangechecks
    return true;
}

bool ArduinoPin::setPinMode(ArduinoPinMode &pin_mode)
{
    m_pin_mode = pin_mode;
    return true;
}

bool ArduinoPin::checkPinModeRange(uint8_t &value)
{
    //TODO Rangechecks
    return true;
}