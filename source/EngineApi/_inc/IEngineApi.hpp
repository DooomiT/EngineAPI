#pragma once
#include "EngineApiDatatypes.hpp"

class IEngineApi
{
public:
    IEngineApi() = default;
    virtual bool getEngineState(EngineState &f_engine_state) = 0;
    virtual bool addPin(uint8_t f_pin_number) = 0;
    /* Use other funcs from Handler etc... */
};