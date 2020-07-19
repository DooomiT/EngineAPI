#pragma once
#include "../../inc/IHandler.hpp"
//TODO: fix includes
class IArduinoHandler : public IHandler
{
    virtual bool setNumber(int &number) = 0;
};