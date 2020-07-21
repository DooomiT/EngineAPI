#include "../_inc/ArduinoHandler.hpp"
//TODO: fix includes

bool ArduinoHandler::getInstance(ArduinoHandler &arduino_handler)
{
    if (ArduinoHandler::s_instance == nullptr)
        ArduinoHandler::s_instance = new ArduinoHandler();
    arduino_handler = *s_instance;
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
