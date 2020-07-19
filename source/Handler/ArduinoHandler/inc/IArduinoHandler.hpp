#include "IHandler.hpp"

class IArduinoHandler : public IHandler
{
    virtual bool setNumber(int &number) = 0;
};