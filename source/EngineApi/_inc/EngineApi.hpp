#pragma once
#include <iostream>
#include "IEngineApi.hpp"
#include <memory>
#include "ArduinoHandler.hpp"

class EngineApi : public IEngineApi
{
public:
	EngineApi();
	static bool getInstance(std::shared_ptr<EngineApi> &f_engine_api);
	bool getEngineState(EngineState &f_engine_state);
	/* Use other funcs from Handler etc... */

private:
	static std::shared_ptr<EngineApi> s_instance;
	static std::shared_ptr<ArduinoHandler> s_handler;
};