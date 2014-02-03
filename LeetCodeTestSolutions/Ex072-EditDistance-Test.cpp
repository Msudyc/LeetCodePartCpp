#include "CppUnitTest.h"
#include "Ex072-EditDistance.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex72Test)
    {
    public:

        TEST_METHOD(Ex072_Test_minDistance)
        {
            Ex72 ex;
            Assert::AreEqual(3, ex.minDistance("ok", "good"));
        }

        TEST_METHOD(Ex072_Test_minDistance1)
        {
            Ex72 ex;
            Assert::AreEqual(2, ex.minDistance("gok", "good"));
        }

        TEST_METHOD(Ex072_Test_minDistance2)
        {
            Ex72 ex;
            Assert::AreEqual(3, ex.minDistance("gok", ""));
        }

        TEST_METHOD(Ex072_Test_minDistance3)
        {
            Ex72 ex;
            Assert::AreEqual(0, ex.minDistance("good", "good"));
        }
    };
}