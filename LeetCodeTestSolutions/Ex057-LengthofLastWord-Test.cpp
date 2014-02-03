#include "CppUnitTest.h"
#include "Ex057-LengthofLastWord.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex57Test)
    {
    public:

        TEST_METHOD(Ex057_Test_lengthOfLastWord)
        {
            Ex57 ex;
            Assert::AreEqual(5, ex.lengthOfLastWord("abc aaaaa"));
        }

        TEST_METHOD(Ex057_Test_lengthOfLastWord1)
        {
            Ex57 ex;
            Assert::AreEqual(3, ex.lengthOfLastWord(" abc"));
        }

        TEST_METHOD(Ex057_Test_lengthOfLastWord2)
        {
            Ex57 ex;
            Assert::AreEqual(1, ex.lengthOfLastWord(" abc ss vv a "));
        }
    };
}