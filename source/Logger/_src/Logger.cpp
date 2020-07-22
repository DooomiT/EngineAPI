#include "Logger.hpp"

std::shared_ptr<Logger> Logger::s_instance;

Logger::Logger() : m_logger_state(LoggerState::ON)
{
}

bool Logger::getInstance(std::shared_ptr<Logger> &f_logger)
{
    if (Logger::s_instance == nullptr)
        s_instance.reset(new Logger);
    f_logger = s_instance;
    return true;
}

bool Logger::getState(LoggerState &f_logger_state)
{
    f_logger_state = m_logger_state;
    return true;
}

bool Logger::logFatal(std::string &f_log_string)
{
    return true;
}

bool Logger::logError(std::string &f_log_string)
{
    return true;
}

bool Logger::logDebug(std::string &f_log_string)
{
    return true;
}

bool Logger::logInfo(std::string &f_log_string)
{
    return true;
}

bool writeLogString()
{
    //TODO: Open File Write all strings from Vector to File
    //TODO: Empty Logstring
}

bool checkLogStringSize()
{
    //TODO: Check LogStringSize > 10 Kb -> ret true
}

bool printLogString()
{
    for(auto log_string: m_log_string_vect)
    {
        std::cout << *log_string << std::endl;
    }
}