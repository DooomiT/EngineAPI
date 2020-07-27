#include "../_inc/ArduinoHandler.hpp"
#include "EngineApiDatatypes.hpp"

// TODO: fix includes
// TODO: Add logstring for all logs
// TODO: Add rest of function set
std::shared_ptr<ArduinoHandler> ArduinoHandler::s_instance;
std::shared_ptr<Logger> ArduinoHandler::s_logger;

ArduinoHandler::ArduinoHandler() : m_engine_state(SETUP)
{
    if (Logger::getInstance(s_logger))
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
    //TODO: checki if ArduinoPin is already set
    bool is_not_available{false};
    auto tmp_iterator = m_arduino_pin_map.find(f_pin_number);
    if (tmp_iterator == m_arduino_pin_map.end())
    {
        ArduinoPin new_pin(f_pin_number);
        m_arduino_pin_map.insert(std::pair<uint8_t, ArduinoPin>(f_pin_number, new_pin));
        s_logger.get()->logDebug("ArduinoHandler::addPin: added Pin");
        is_not_available = true;
    }
    else
    {
        s_logger.get()->logDebug("ArduinoHandler::addPin: Pin already created");
    }

    return is_not_available;
}

bool ArduinoHandler::getPin(uint8_t f_pin_number, ArduinoPin &f_pin)
{
    ArduinoPin *tmp_pin{nullptr};
    bool is_available{false};
    auto tmp_iterator = m_arduino_pin_map.find(f_pin_number);
    if (tmp_iterator != m_arduino_pin_map.end())
    {
        f_pin = tmp_iterator->second;
        s_logger.get()->logDebug("ArduinoHandler::getPin: received Pin");
        is_available = true;
    }
    else
    {
        s_logger.get()->logDebug("ArduinoHandler::getPin: Pin not found");
    }
    return is_available;
}

bool ArduinoHandler::setPinValue(uint8_t f_pin_number, uint8_t &pin_value)
{
    bool is_available{false};
    std::string log_string{""};
    log_string += "ArduinoHandler::setPinValue: Set Pin ";
    log_string += std::to_string(f_pin_number);
    log_string += " to value: ";
    log_string += std::to_string(pin_value);
    auto tmp_iterator = m_arduino_pin_map.find(f_pin_number);
    if (tmp_iterator != m_arduino_pin_map.end())
    {
        tmp_iterator->second.setPinValue(pin_value);
        s_logger.get()->logDebug(log_string);
        is_available = true;
    }
    return is_available;
}
bool ArduinoHandler::setPinMode(uint8_t f_pin_number, ArduinoPinMode &pin_mode)
{
    bool is_available{false};
    std::string log_string{""};
    log_string += "ArduinoHandler::setPinMode: Set Pin ";
    log_string += std::to_string(f_pin_number);
    log_string += " to mode: ";
    log_string += std::to_string(pin_mode);
    auto tmp_iterator = m_arduino_pin_map.find(f_pin_number);
    if (tmp_iterator != m_arduino_pin_map.end())
    {
        tmp_iterator->second.setPinMode(pin_mode);
        s_logger.get()->logDebug(log_string);
        is_available = true;
    }
    return is_available;
}
