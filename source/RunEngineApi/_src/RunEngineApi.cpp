#include <iostream>
#include <memory>
#include "EngineApi.hpp"
#include "EngineApiDatatypes.hpp"

int main(void)
{
    std::shared_ptr<EngineApi> app;
    EngineApi::getInstance(app);
    EngineApi *instance = app.get();
    EngineState engine_state;
    bool return_value = false;
    return_value = app.get()->getEngineState(engine_state);
    if (return_value)
    {
        std::cout << "Engine State received: " << engine_state << std::endl;
    }
    else
    {
        std::cout << "Engine State not received!" << std::endl;
    }

    instance->addPin(1);
    instance->addPin(1);
    instance->addPin(2);

    uint8_t x = 25;
    ArduinoPinMode mode_x = ArduinoPinMode::INPUT;

    instance->setPinMode(1, mode_x);
    instance->setPinValue(1, x);
    instance->setPinMode(3, mode_x);
    instance->setPinValue(3, x);
}