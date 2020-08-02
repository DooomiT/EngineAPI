#pragma once
#include <iostream>
#include <memory>
#include <map>
#include "IArduinoHandler.hpp"
#include "EngineApiDatatypes.hpp"
// #include "Logger.hpp"
#include "../../Logger/_inc/Logger.hpp"
class ArduinoHandler : public IArduinoHandler
{
public:
  ArduinoHandler();
  static bool getInstance(std::shared_ptr<IArduinoHandler> &f_arduino_handler);
  bool getEngineState(EngineState &f_engine_state) override;
  bool addPin(uint8_t f_pin_number) override;
  bool getPin(uint8_t f_pin_number, ArduinoPin &f_pin) override;
  bool setPinValue(uint8_t f_pin_number, uint8_t &f_pin_value) override;
  bool setPinDir(uint8_t f_pin_number, ArdPinDir &f_pin_dir) override;
  bool setPinMode(uint8_t f_pin_number, ArdPinMode &f_pin_mode) override;

private:
  static std::shared_ptr<IArduinoHandler> s_instance;
  static std::shared_ptr<ILogger> s_logger;
  std::map<uint8_t, ArduinoPin> m_arduino_pin_map;
  EngineState m_engine_state;
};