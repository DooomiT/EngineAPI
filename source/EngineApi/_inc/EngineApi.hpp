#pragma once
#include <iostream>
#include <memory>
#include "IEngineApi.hpp"

class EngineApi : public IEngineApi
{
public:
	EngineApi();
	static bool getInstance(std::shared_ptr<EngineApi> &f_engine_api);
	bool getEngineState(EngineState &f_engine_state);
	bool addPin(uint8_t f_pin_number);
	bool getPin(uint8_t f_pin_number, ArduinoPin &f_pin);
	bool setPinValue(uint8_t f_pin_number, uint8_t &pin_value);
	bool setPinMode(uint8_t f_pin_number, ArduinoPinMode &pin_mode);
	/* Use other funcs from Handler etc... */

private:
	static std::shared_ptr<EngineApi> s_instance;
	static std::shared_ptr<ArduinoHandler> s_handler;
};