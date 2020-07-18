#include "EngineApi.hpp"

bool EngineApi::setNumber(int &number)
{
    this->number = number;
    std::cout << "Set number " << this->number << "\n";
    return true;
}