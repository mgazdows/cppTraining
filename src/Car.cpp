#include "../hdr/Car.h"
#include <iostream>

namespace Moto
{

Car::Car(Engine& newengine):engine(newengine)
{
    std::cout<<"Car constructed with "<<engine.engineType()<<std::endl;
}

void Car::startCar()
{
    engine.startEngine();
    std::cout<<"Car with "<<engine.engineType()<<" started"<<std::endl;
}

}