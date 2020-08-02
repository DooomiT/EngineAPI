#pragma once
#include <iostream>
#include <memory>
#include "IEngineApi.hpp"

class EngineApi : public IEngineApi
{
public:
	EngineApi();
	static bool getInstance(std::shared_ptr<IEngineApi> &f_engine_api);
	bool getEngineState(EngineState &f_engine_state) override;
	bool addPin(uint8_t f_pin_number) override;
	bool getPin(uint8_t f_pin_number, ArduinoPin &f_pin) override;
	bool setPinValue(uint8_t f_pin_number, uint8_t &f_pin_value) override;
	bool setPinDir(uint8_t f_pin_number, ArdPinDir &f_pin_dir) override;
	bool setPinMode(uint8_t f_pin_number, ArdPinMode &f_pin_mode) override;
	/* Use other funcs from Handler etc... */

private:
	static std::shared_ptr<IEngineApi> s_instance;
	static std::shared_ptr<IArduinoHandler> s_handler;
};