#pragma once
#include <iostream>
#include "IEngineApi.hpp"
#include <memory>
#include "ArduinoHandler.hpp"

class EngineApi : public IEngineApi
{
public:
	EngineApi();
	static bool getInstance(std::shared_ptr<EngineApi> &engine_api);
	bool getState(EngineState &engine_state);
	/* Use other funcs from Handler etc... */

private:
	static std::shared_ptr<EngineApi> s_instance;
	static std::shared_ptr<ArduinoHandler> s_handler;
};