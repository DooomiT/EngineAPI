#pragma once
#include "../../_inc/IHandler.hpp"
#include "EngineApiDatatypes.hpp"
//TODO: fix includes
class IArduinoHandler : public IHandler
{
    virtual bool getEngineState(EngineState &f_engine_state) = 0;
    virtual bool addPin(uint8_t f_pin_number) = 0;
    virtual bool getPin(uint8_t f_pin_number, ArduinoPin &f_pin) = 0;
};