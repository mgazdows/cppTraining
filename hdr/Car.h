#pragma once
#include "Engine.h"
#include <memory>

namespace Moto
{

class Car
{
    Engine& engine;
public:
    Car(Engine&);

    void startCar();
};

}