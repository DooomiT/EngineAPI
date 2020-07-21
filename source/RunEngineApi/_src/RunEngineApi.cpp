#include <iostream>
#include <memory>
#include "EngineApi.hpp"

int main(void)
{
    std::shared_ptr<EngineApi> app;
    EngineApi::getInstance(app);
}