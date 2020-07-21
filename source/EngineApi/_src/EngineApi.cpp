#include "EngineApi.hpp"

std::shared_ptr<EngineApi> EngineApi::s_instance;
std::shared_ptr<ArduinoHandler> EngineApi::s_handler;

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

bool EngineApi::getInstance(std::shared_ptr<EngineApi> &engine_api)
{
    if (EngineApi::s_instance == nullptr)
        s_instance.reset(new EngineApi);
    engine_api = s_instance;
    return true;
}

bool EngineApi::getState(EngineState &engine_state)
{
    //TODO: Implement
    return true;
}
