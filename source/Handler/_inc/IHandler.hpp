#pragma once 
#include "EngineApiDatatypes.hpp"
class IHandler
{
    /*Define what the Handler needs*/
    virtual bool getState(EngineState &) = 0;
};