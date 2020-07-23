#include "../_inc/ArduinoHandler.hpp"
//TODO: fix includes
std::shared_ptr<ArduinoHandler> ArduinoHandler::s_instance;
std::shared_ptr<Logger> ArduinoHandler::s_logger;


ArduinoHandler::ArduinoHandler() : m_engine_state(SETUP) {
    if(Logger::getInstance(s_logger))
    {
        //DONE
    }
    else
    {
        //ERROR
    }
    
}

bool ArduinoHandler::getInstance(std::shared_ptr<ArduinoHandler> &f_arduino_handler)
{
    if (ArduinoHandler::s_instance == nullptr)
    {
        s_instance.reset(new ArduinoHandler);
        s_logger.get()->logDebug("ArduinoHandler::getInstance: created instance");
    }
    f_arduino_handler = s_instance;
    return true;
}

bool ArduinoHandler::getEngineState(EngineState &f_engine_state)
{
    f_engine_state = m_engine_state;
    s_logger.get()->logDebug("ArduinoHandler::getEngineState: returned engine state");
    return true;
}

bool ArduinoHandler::addPin(uint8_t f_pin_number)
{
    //TODO: Implement
    s_logger.get()->logDebug("ArduinoHandler::addPin: added Pin");
    return true;
}
