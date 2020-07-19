#pragma once
#include <iostream>
#include "IArduinoHandler.hpp"

class ArduinoHandler : public IArduinoHandler
{
  public:
    bool setNumber(int &number) override;
  private:
    int number;
};