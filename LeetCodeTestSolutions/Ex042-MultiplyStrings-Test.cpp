#include "CppUnitTest.h"
#include "Ex042-MultiplyStrings.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex42Test)
    {
    public:

        TEST_METHOD(Ex042_Test_multiply)
        {
            Ex42 ex;
            Assert::AreEqual(string("56088"), ex.multiply("123", "456"));
        }

        TEST_METHOD(Ex042_Test_multiply1)
        {
            Ex42 ex;
            Assert::AreEqual(string("0"), ex.multiply("0", "45623456432"));
        }

        TEST_METHOD(Ex042_Test_multiply2)
        {
            Ex42 ex;
            Assert::AreEqual(string("55597647977088"), ex.multiply("1232123", "45123456"));
        }
    };
}