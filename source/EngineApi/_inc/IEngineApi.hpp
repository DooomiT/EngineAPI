#pragma once
#include "EngineApiDatatypes.hpp"

class IEngineApi
{
public:
    IEngineApi() = default;
    virtual bool getEngineState(EngineState &f_engine_state) = 0;
    /* Use other funcs from Handler etc... */
};