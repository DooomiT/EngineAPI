#include "ArduinoHandler.hpp"

bool ArduinoHandler::setNumber(int &number)
{
    this->number = number;
    std::cout << "Set number " << this->number << "\n";
    return true;
}