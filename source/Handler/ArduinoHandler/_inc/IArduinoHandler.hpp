#pragma once
#include "../../_inc/IHandler.hpp"
//TODO: fix includes
class IArduinoHandler : public IHandler
{
    virtual bool getEngineState(EngineState &f_engine_state) = 0;
    virtual bool addPin(uint8_t f_pin_number) = 0;
};