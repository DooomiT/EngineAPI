#pragma once
#include <iostream>
#include "EngineApiDatatypes.hpp"

class ILogger
{
public:
    ILogger() = default;
    virtual bool getState(LoggerState &f_logger_state) = 0;
    virtual bool logFatal(std::string f_log_string) = 0;
    virtual bool logError(std::string f_log_string) = 0;
    virtual bool logDebug(std::string f_log_string) = 0;
    virtual bool logInfo(std::string f_log_string) = 0;
};