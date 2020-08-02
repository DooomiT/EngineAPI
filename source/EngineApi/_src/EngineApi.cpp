#include "EngineApi.hpp"

std::shared_ptr<IEngineApi> EngineApi::s_instance;
std::shared_ptr<IArduinoHandler> EngineApi::s_handler;

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

bool EngineApi::getInstance(std::shared_ptr<IEngineApi> &f_engine_api)
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

bool EngineApi::addPin(uint8_t pin_number)
{
    return s_handler.get()->addPin(pin_number);
}

bool EngineApi::getPin(uint8_t f_pin_number, ArduinoPin &f_pin)
{
    return s_handler.get()->getPin(f_pin_number, f_pin);
}

bool EngineApi::setPinValue(uint8_t f_pin_number, uint8_t &f_pin_value)
{
    return s_handler.get()->setPinValue(f_pin_number, f_pin_value);
}

bool EngineApi::setPinDir(uint8_t f_pin_number, ArdPinDir &f_pin_dir)
{
    return s_handler.get()->setPinDir(f_pin_number, f_pin_dir);
}

bool EngineApi::setPinMode(uint8_t f_pin_number, ArdPinMode &f_pin_mode)
{
    return s_handler.get()->setPinMode(f_pin_number, f_pin_mode);
}
