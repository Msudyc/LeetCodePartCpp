#include "CppUnitTest.h"
#include "Ex037-CountandSay.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex37Test)
    {
    public:

        TEST_METHOD(Ex037_Test_countAndSay)
        {
            Ex37 ex;
            Assert::AreEqual(string("1113213211"), ex.countAndSay(8));
        }

        TEST_METHOD(Ex037_Test_countAndSay1)
        {
            Ex37 ex;
            Assert::AreEqual(string("1"), ex.countAndSay(1));
        }

        TEST_METHOD(Ex037_Test_countAndSay2)
        {
            Ex37 ex;
            Assert::AreEqual(string("11"), ex.countAndSay(2));
        }

        TEST_METHOD(Ex037_Test_countAndSay3)
        {
            Ex37 ex;
            Assert::AreEqual(string("21"), ex.countAndSay(3));
        }

        TEST_METHOD(Ex037_Test_countAndSay4)
        {
            Ex37 ex;
            Assert::AreEqual(string("1211"), ex.countAndSay(4));
        }
    };
}