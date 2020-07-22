#pragma once
#include <iostream>
#include <memory>
#include "IArduinoHandler.hpp"

class ArduinoHandler : public IArduinoHandler
{
public:
  ArduinoHandler();
  static bool getInstance(std::shared_ptr<ArduinoHandler> &f_arduino_handler);
  bool getEngineState(EngineState &f_engine_state);
  bool addPin(uint8_t f_pin_number);

private:
  static std::shared_ptr<ArduinoHandler> s_instance;
  EngineState m_engine_state;
};