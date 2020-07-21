#pragma once
#include <iostream>
#include "IArduinoHandler.hpp"

class ArduinoHandler : public IArduinoHandler
{
public:
  static bool getInstance(ArduinoHandler &arduino_handler);
  bool getState(EngineState &);
  bool addPin(uint8_t pin_number);

private:
  static ArduinoHandler *s_instance;
};