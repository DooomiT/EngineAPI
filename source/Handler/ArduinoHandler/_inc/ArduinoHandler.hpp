#pragma once
#include <iostream>
#include <memory>
#include "IArduinoHandler.hpp"

class ArduinoHandler : public IArduinoHandler
{
public:
  static bool getInstance(std::shared_ptr<ArduinoHandler> &arduino_handler);
  bool getState(EngineState &);
  bool addPin(uint8_t pin_number);

private:
  static std::shared_ptr<ArduinoHandler> s_instance;
};