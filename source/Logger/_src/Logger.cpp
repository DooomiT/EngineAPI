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
    if (!checkLogStringSize())
    {
        writeLogString();
        s_instance.get()->logInfo("\n\nWrote Logstring to File \n\n");
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
    if (!checkLogStringSize())
    {
        writeLogString();
        s_instance.get()->logInfo("\n\nWrote Logstring to File \n\n");
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
    if (!checkLogStringSize())
    {
        writeLogString();
        s_instance.get()->logInfo("\n\nWrote Logstring to File \n\n");
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
    if (!checkLogStringSize())
    {
        writeLogString();
        s_instance.get()->logInfo("\n\nWrote Logstring to File \n\n");
    }
    return is_logged;
}

bool Logger::writeLogString()
{
    //TODO: Open File Write all strings from Vector to File
    bool is_written{false};
    std::string log_file_name{""};
    if (getTimeStampMillis(log_file_name))
    {
        std::ofstream log_file_out;
        log_file_out.open(log_file_name + ".log");
        for (auto log : m_log_string_vect)
        {
            log_file_out << log << "\n";
        }
        log_file_out.close();
        m_log_string_vect.clear();
        is_written = true;
    }
    return is_written;
    //TODO: Empty Logstring
}

bool Logger::checkLogStringSize()
{
    //TODO: Check LogStringSize > 10 Kb -> ret true
    bool is_logstring_full{true};
    std::stringstream ss{""};
    for (std::string log_string : m_log_string_vect)
    {
        ss << log_string;
    }
    if (ss.str().size() > MAX_LOG_STRING_SIZE)
    {
        is_logstring_full = false;
    }
    return is_logstring_full;
}

bool Logger::printLogString()
{
    for (auto log_string : m_log_string_vect)
    {
        std::cout << log_string << std::endl;
    }
    return true;
}

bool Logger::getTimeStampMillis(std::string &time_stamp)
{
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    std::ofstream log_file_out;
    auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
    duration -= milliseconds;
    time_stamp = std::to_string(milliseconds.count());
    return true;
}
