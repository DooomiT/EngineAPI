#pragma once
#include "EngineApiDatatypes.hpp"
#include "ArduinoHandler.hpp"

class IEngineApi
{
public:
    IEngineApi() = default;
    virtual bool getEngineState(EngineState &f_engine_state) = 0;
    virtual bool addPin(uint8_t f_pin_number) = 0;
    virtual bool getPin(uint8_t f_pin_number, ArduinoPin &f_pin) = 0;
    virtual bool setPinValue(uint8_t f_pin_number, uint8_t &pin_value) = 0;
    virtual bool setPinMode(uint8_t f_pin_number, ArduinoPinMode &pin_mode) = 0;
    /* Use other funcs from Handler etc... */
};