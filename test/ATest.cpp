#include "../hdr/Car.h"
#include "mock/EngineMock.hpp"
#include "gtest/gtest.h"

using namespace testing;

namespace Moto
{

class CarTest : public Test
{
public:
    void SetUp()
    {
        
    }
};

TEST_F(CarTest, shouldwork)
{
    std::unique_ptr<EngineMock> engineMock= std::make_unique<EngineMock>();

    EXPECT_CALL(*engineMock, startEngine()).Times(1);
    EXPECT_CALL(*engineMock, engineType()).WillOnce(ReturnRef("Benz Engine"));

    Car testCar(*engineMock);
}


}

GTEST_API_ int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}