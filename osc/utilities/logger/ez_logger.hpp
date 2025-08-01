#pragma once

#include <string>
#include <iostream>
#include <chrono>
#include <ctime>

enum class LogLevel { DEBUG, INFO, WARNING, ERROR };

class ezLogger {
public:
    static void log(LogLevel level, const std::string& message);

private:
    static std::string levelToString(LogLevel level);
    static std::string currentTime();
};

// Enable or disable logging here
#define ENABLE_LOGGING

#ifdef ENABLE_LOGGING
    #define LOG_DEBUG(msg)   ezLogger::log(LogLevel::DEBUG, msg)
    #define LOG_INFO(msg)    ezLogger::log(LogLevel::INFO, msg)
    #define LOG_WARNING(msg) ezLogger::log(LogLevel::WARNING, msg)
    #define LOG_ERROR(msg)   ezLogger::log(LogLevel::ERROR, msg)
#else
    #define LOG_DEBUG(msg)   ((void)0)
    #define LOG_INFO(msg)    ((void)0)
    #define LOG_WARNING(msg) ((void)0)
    #define LOG_ERROR(msg)   ((void)0)
#endif
