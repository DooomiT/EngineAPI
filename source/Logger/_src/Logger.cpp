#include "Logger.hpp"

std::shared_ptr<Logger> Logger::s_instance;

Logger::Logger()
    : m_logger_state(LoggerState::ON),
      m_log_path(std::filesystem::path("/log"))
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

bool Logger::logFatal(std::string f_log_string)
{
    bool is_logged{false};
    if (m_logger_state == LoggerState::ON)
    {
        std::string log_string;
        log_string += "FATAL: " + f_log_string;
        std::cout << log_string << "\n";
        m_log_string_vect.push_back(log_string);
        is_logged = true;
    }
    return is_logged;
}

bool Logger::logError(std::string f_log_string)
{
    bool is_logged{false};
    if (m_logger_state == LoggerState::ON)
    {
        std::string log_string;
        log_string += "ERROR: " + f_log_string;
        std::cout << log_string << "\n";
        m_log_string_vect.push_back(log_string);
        is_logged = true;
    }
    return is_logged;
}

bool Logger::logDebug(std::string f_log_string)
{
    bool is_logged{false};
    if (m_logger_state == LoggerState::ON)
    {
        std::string log_string;
        log_string += "DEBUG: " + f_log_string;
        std::cout << log_string << "\n";
        m_log_string_vect.push_back(log_string);
        is_logged = true;
    }
    return is_logged;
}

bool Logger::logInfo(std::string f_log_string)
{
    bool is_logged{false};
    if (m_logger_state == LoggerState::ON)
    {
        std::string log_string;
        log_string += "INFO: " + f_log_string;
        std::cout << log_string << "\n";
        m_log_string_vect.push_back(log_string);
        is_logged = true;
    }
    return is_logged;
}

bool Logger::writeLogString()
{
    //TODO: Open File Write all strings from Vector to File
    std::ofstream log_file(m_log_path);
    for (auto log : m_log_string_vect)
    {
        log_file << log << "\n";
    }
    m_log_string_vect.clear();
    return true;
    //TODO: Empty Logstring
}

bool Logger::checkLogStringSize()
{
    //TODO: Check LogStringSize > 10 Kb -> ret true
    return true;
}

bool Logger::printLogString()
{
    for (auto log_string : m_log_string_vect)
    {
        std::cout << log_string << std::endl;
    }
    return true;
}