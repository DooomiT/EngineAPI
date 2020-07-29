#include <iostream>
#include <memory>
#include "EngineApi.hpp"
#include "EngineApiDatatypes.hpp"

int main(void)
{
    std::shared_ptr<EngineApi> app;
    EngineApi::getInstance(app);
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

    app.get()->addPin(1);
    app.get()->addPin(1);
    app.get()->addPin(2);

    uint8_t x = 25;
    ArdPinDir mode_x = ArdPinDir::INPUT;

    app.get()->setPinDir(1, mode_x);
    app.get()->setPinValue(1, x);
    app.get()->setPinDir(3, mode_x);
    app.get()->setPinValue(3, x);
}