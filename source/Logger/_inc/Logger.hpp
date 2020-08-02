#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <fstream>
#include <filesystem>
#include <chrono>
#include "ILogger.hpp"

class Logger : public ILogger
{
public:
    Logger();
    static bool getInstance(std::shared_ptr<ILogger> &f_logger);
    bool getState(LoggerState &f_logger_state) override;
    bool logFatal(std::string f_log_string) override;
    bool logError(std::string f_log_string) override;
    bool logDebug(std::string f_log_string) override;
    bool logInfo(std::string f_log_string) override;

private:
    static const int MAX_LOG_STRING_SIZE = 10000;
    static std::shared_ptr<ILogger> s_instance;
    LoggerState m_logger_state;
    std::vector<std::string> m_log_string_vect;
    std::filesystem::path m_log_path; // native means use O/S path format

    bool writeLogString();
    bool checkLogStringSize();
    bool printLogString();
    bool getTimeStampMillis(std::string &time_stamp);
};