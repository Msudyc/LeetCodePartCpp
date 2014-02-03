#include "CppUnitTest.h"
#include "Ex012-IntegertoRoman.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex12Test)
    {
    public:

        TEST_METHOD(Ex012_Test_intToRoman)
        {
            Ex12 ex;
            Assert::AreEqual(string("IV"), ex.intToRoman(4));
            Assert::AreEqual(string("VIII"), ex.intToRoman(8));
            Assert::AreEqual(string("CXXXVIII"), ex.intToRoman(138));
        }
    };
}