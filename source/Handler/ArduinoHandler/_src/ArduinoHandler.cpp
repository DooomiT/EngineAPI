#include "../_inc/ArduinoHandler.hpp"
//TODO: fix includes
std::shared_ptr<ArduinoHandler> ArduinoHandler::s_instance;

ArduinoHandler::ArduinoHandler() : m_engine_state(SETUP) {}

bool ArduinoHandler::getInstance(std::shared_ptr<ArduinoHandler> &f_arduino_handler)
{
    if (ArduinoHandler::s_instance == nullptr)
        s_instance.reset(new ArduinoHandler);
    f_arduino_handler = s_instance;
    return true;
}

bool ArduinoHandler::getEngineState(EngineState &f_engine_state)
{
    f_engine_state = m_engine_state;
    return true;
}

bool ArduinoHandler::addPin(uint8_t f_pin_number)
{
    //TODO: Implement
    return true;
}
