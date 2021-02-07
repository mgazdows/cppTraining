#pragma once
#include <string>

namespace Moto
{

class Engine
{
public:
    Engine() = default;
    virtual ~Engine() = default;

    virtual void startEngine() = 0;
    virtual const std::string& engineType() = 0;

};

}