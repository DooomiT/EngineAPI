#pragma once
#include "../../_inc/IHandler.hpp"
#include "EngineApiDatatypes.hpp"
//TODO: fix includes
class IArduinoHandler : public IHandler
{
    virtual bool getEngineState(EngineState &f_engine_state) = 0;
    virtual bool addPin(uint8_t f_pin_number) = 0;
    virtual bool getPin(uint8_t f_pin_number, ArduinoPin &f_pin) = 0;
    virtual bool setPinValue(uint8_t f_pin_number, uint8_t &f_pin_value) = 0;
    virtual bool setPinDir(uint8_t f_pin_number, ArdPinDir &f_pin_dir) = 0;
    virtual bool setPinMode(uint8_t f_pin_number, ArdPinMode &f_pin_mode) = 0;
};