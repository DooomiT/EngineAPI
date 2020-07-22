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

bool EngineApi::getInstance(std::shared_ptr<EngineApi> &f_engine_api)
{
    if (EngineApi::s_instance == nullptr)
        s_instance.reset(new EngineApi);
    f_engine_api = s_instance;
    return true;
}

bool EngineApi::getEngineState(EngineState &f_engine_state)
{
    //TODO: Implement
    bool return_value = false;
    return_value = s_handler.get()->getEngineState(f_engine_state);
    return return_value;
}
