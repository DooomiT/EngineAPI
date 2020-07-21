#pragma once
#include "EngineApiDatatypes.hpp"

class IEngineApi
{
public:
    IEngineApi() = default;
    virtual bool getState(EngineState &) = 0;
    /* Use other funcs from Handler etc... */
};