#include "../../hdr/Engine.h"
#include "gmock/gmock.h"

using namespace testing;

namespace Moto
{

class EngineMock : public Engine
{
public:
    MOCK_METHOD0(startEngine, void());
    MOCK_METHOD0(engineType, const std::string&());
};


}