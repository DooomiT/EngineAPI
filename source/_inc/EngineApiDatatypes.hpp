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

class IArduinoPin
{
public:
    IArduinoPin(uint8_t pin_number);
    virtual bool setPinValue(uint8_t pin_number) = 0;
    virtual bool setPinMode(ArduinoPinMode pin_mode) = 0;
};

class ArduinoPin
{
public:
    ArduinoPin(uint8_t &pin_number) : m_pin_number(pin_number),
                                      m_pin_value(0),
                                      m_pin_mode(ArduinoPinMode::INPUT) {}
    bool setPinValue(uint8_t &pin_value)
    {
        m_pin_value = pin_value;
        //TODO Rangechecks
        return true;
    }
    bool setPinMode(ArduinoPinMode &pin_mode)
    {
        m_pin_mode = pin_mode;
        return true;
    }

private:
    bool checkPinModeRange(uint8_t &value)
    {
        //TODO Rangechecks
        return true;
    }
    uint8_t m_pin_number;
    uint8_t m_pin_value;
    ArduinoPinMode m_pin_mode;
};