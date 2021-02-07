#include <iostream>
#include <algorithm>
#include <vector>
#include "hdr/Car.h"
#include "hdr/Benz.h"

#include <iostream>

 class A
    {
    public:
        A():i(0){std::cout<<"A "<<i<<std::endl;}
        A(const A& a){i=a.i;std::cout<<"A cpy "<<i<<std::endl;}
        A(const A&& a){i=a.i;std::cout<<"A mv "<<i<<std::endl;}

        A& operator=(const A& a){i=a.i;std::cout<<"A op= "<<i<<std::endl;  return *this;}
        A& operator=(const A&& a){i=a.i;std::cout<<"A mv op "<<i<<std::endl;  return *this;}

        bool operator==(int i){
            if(i==1)
                return true;
            return false;
        }

        int i;

        auto getLambda();
    };

    auto A::getLambda()
    {
        return [&](){std::cout<<i<<std::endl;};
    }



int main()
{
   /* std::unique_ptr<Moto::Engine> engine = std::make_unique<Moto::Benz>();
    engine->startEngine();
    std::cout<<"here1"<<std::endl;

    Moto::Car benzCar = Moto::Car(*engine);
*/

   
    A *aaa = new A();
    aaa->i=1000;

    //benzCar.startCar();
    
    std::cout<<"hello"<<std::endl;

    std::vector<A> secondVect {A()};

    std::vector<int> myVect = {1,2,3,4,5,6,7,11};

    std::cout<<"here"<<std::endl;

    std::cout<<std::all_of(secondVect.begin(),secondVect.end(),[&aaa](A& a){
                                    std::cout<<"lambda"<<std::endl; return a==1;})<<std::endl;


    auto lamb = aaa->getLambda();

    delete aaa;

    lamb();

    return 0;
}
