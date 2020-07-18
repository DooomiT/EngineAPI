#pragma once
#include <iostream>
#include "IEngineApi.hpp"

class EngineApi : public IEngineApi
{
  public:
    bool setNumber(int &number) override;
  private:
    int number;
};