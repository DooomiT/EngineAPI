#pragma once
#include "../../_inc/IHandler.hpp"
//TODO: fix includes
class IArduinoHandler : public IHandler
{
    virtual bool getState(EngineState &) = 0;
    virtual bool addPin(uint8_t pin_number) = 0;
};