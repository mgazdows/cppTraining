#pragma once
#include "Engine.h"

namespace Moto
{

class Benz: public Engine
{
    std::string type;
public:
    Benz();
    ~Benz() = default;

    void startEngine() override;
    const std::string& engineType() override;
};

}