#include "EngineApi.hpp"

EngineApi::EngineApi()
{
    if (ArduinoHandler::getInstance(s_handler))
    {
        //DONE
    }
    else
    {
        //ERROR
    }
}

bool EngineApi::getInstance(EngineApi &engine_api)
{
    if (EngineApi::s_instance == nullptr)
        EngineApi::s_instance = new EngineApi();
    engine_api = *s_instance;
    return true;
}

bool EngineApi::getState(EngineState &engine_state)
{
    //TODO: Implement
    return true;
}
