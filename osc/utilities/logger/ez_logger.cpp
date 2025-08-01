#include "ez_logger.hpp"
#include <iostream>

void ezLogger::log(LogLevel level, const std::string &message)
{
    std::cout << "[" << levelToString(level) << "] "
              << message << std::endl;
}

std::string ezLogger::levelToString(LogLevel level) {
    switch (level) {
        case LogLevel::DEBUG: return "DEBUG";
        case LogLevel::INFO: return "INFO";
        case LogLevel::WARNING: return "WARNING";
        case LogLevel::ERROR: return "ERROR";
        default: return "UNKNOWN";
    }
}
