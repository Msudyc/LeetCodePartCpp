#include "CppUnitTest.h"
#include "Ex069-Sqrt(x).h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex69Test)
    {
    public:

        TEST_METHOD(Ex069_Test_sqrt)
        {
            Ex69 ex;
            Assert::AreEqual(7, ex.sqrt(49));
        }

        TEST_METHOD(Ex069_Test_sqrt1)
        {
            Ex69 ex;
            Assert::AreEqual(1, ex.sqrt(1));
        }

        TEST_METHOD(Ex069_Test_sqrt2)
        {
            Ex69 ex;
            Assert::AreEqual(10, ex.sqrt(100));
        }

        TEST_METHOD(Ex069_Test_sqrt3)
        {
            Ex69 ex;
            Assert::AreEqual(5, ex.sqrt(25));
        }
    };
}