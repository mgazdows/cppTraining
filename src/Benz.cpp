#include "../hdr/Benz.h"
#include <iostream>

namespace Moto
{

Benz::Benz():type("benz engine")
{
    std::cout<<"Benz engine constructed"<<std::endl;
}


void Benz::startEngine(){std::cout<<type<<" started"<<std::endl;}

const std::string& Benz::engineType(){return type;}

}