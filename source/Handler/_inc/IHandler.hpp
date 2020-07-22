#pragma once 
#include "EngineApiDatatypes.hpp"
class IHandler
{
    /*Define what the Handler needs*/
    virtual bool getEngineState(EngineState &f_engine_state) = 0;
};