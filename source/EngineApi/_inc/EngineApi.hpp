#pragma once
#include <iostream>
#include "IEngineApi.hpp"
#include "ArduinoHandler.hpp"

class EngineApi : public IEngineApi
{
public:
	EngineApi();
	static bool getInstance(EngineApi &engine_api);
	bool getState(EngineState &engine_state);
	/* Use other funcs from Handler etc... */

private:
	static EngineApi *s_instance;
	static ArduinoHandler s_handler;
};