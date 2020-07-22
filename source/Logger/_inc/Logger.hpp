#include <memory>
#include "ILogger.hpp"

class Logger
{
public:
    Logger();
    static bool getInstance(std::shared_ptr<Logger> &f_logger);
    bool getState(LoggerState &f_logger_state);
    bool logFatal(std::string &f_log_string);
    bool logError(std::string &f_log_string);
    bool logDebug(std::string &f_log_string);
    bool logInfo(std::string &f_log_string);

private:
    static std::shared_ptr<Logger> s_instance;
    LoggerState m_logger_state;
};