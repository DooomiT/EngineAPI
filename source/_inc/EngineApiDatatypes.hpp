#pragma once
enum EngineState
{
    SETUP = 0,
    IDLE = 1,
    WORK = 2,
    SHUTDOWN = 3,
    ERROR = 4
};

enum ArduinoPinMode
{
    INPUT = 0,
    OUTPUT = 1
};

enum LoggerState
{
    ON = 0,
    OFF = 1
};