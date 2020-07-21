#include "../_inc/ArduinoHandler.hpp"
//TODO: fix includes
std::shared_ptr<ArduinoHandler> ArduinoHandler::s_instance;

bool ArduinoHandler::getInstance(std::shared_ptr<ArduinoHandler> &arduino_handler)
{
    if (ArduinoHandler::s_instance == nullptr)
        s_instance.reset(new ArduinoHandler);
    arduino_handler = s_instance;
    return true;
}

bool ArduinoHandler::getState(EngineState &engine_state)
{
    //TODO: Implement
    return true;
}

bool ArduinoHandler::addPin(uint8_t pin_number)
{
    //TODO: Implement
    return true;
}
