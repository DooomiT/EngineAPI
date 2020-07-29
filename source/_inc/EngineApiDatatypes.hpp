#pragma once
enum EngineState
{
    SETUP = 0,
    IDLE = 1,
    WORK = 2,
    SHUTDOWN = 3,
    ERROR = 4
};

enum ArdPinDir
{
    INPUT = 0,
    OUTPUT = 1
};

enum ArdPinMode
{
    ANALOG = 0,
    DIGITAL = 1
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
    virtual bool setPinDir(ArdPinDir f_pin_dir) = 0;
};

class ArduinoPin
{
public:
    ArduinoPin(uint8_t &pin_number) : m_pin_number(pin_number),
                                      m_pin_value(0),
                                      m_pin_dir(ArdPinDir::INPUT) {}
    bool setPinValue(uint8_t &f_pin_value)
    {
        m_pin_value = f_pin_value;
        //TODO Rangechecks
        return true;
    }
    bool setPinDir(ArdPinDir &f_pin_dir)
    {
        m_pin_dir = f_pin_dir;
        return true;
    }
    bool setPinMode(ArdPinMode &f_pin_mode)
    {
        m_pin_mode = f_pin_mode;
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
    ArdPinDir m_pin_dir;
    ArdPinMode m_pin_mode;
};