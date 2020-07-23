#include <iostream>
#include <memory>
#include "EngineApi.hpp"

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
    for(int i = 0; i <= 1000; ++i)
    {
        app.get()->addPin(i);
    }
}