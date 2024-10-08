#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.5/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestPowerPositiveExponent)
        {
            Assert::AreEqual(8.0, power(2, 3), 0.001);
            Assert::AreEqual(9.0, power(3, 2), 0.001);
            Assert::AreEqual(1.0, power(5, 0), 0.001);
        }

        TEST_METHOD(TestPowerNegativeExponent)
        {
            Assert::AreEqual(0.25, power(2, -2), 0.001);
            Assert::AreEqual(0.2, power(5, -1), 0.001);
        }

        TEST_METHOD(TestPowerZeroBase)
        {
            Assert::AreEqual(0.0, power(0, 5), 0.001);
            Assert::AreEqual(1.0, power(0, 0), 0.001);
        }
    };
}
