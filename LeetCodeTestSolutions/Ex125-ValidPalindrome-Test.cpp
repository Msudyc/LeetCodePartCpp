#include "CppUnitTest.h"
#include "Ex125-ValidPalindrome.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex125Test)
    {
    public:

        TEST_METHOD(Ex125_Test_isPalindrome)
        {
            Ex125 ex;
            Assert::IsTrue(ex.isPalindrome("A man, a plan, a canal: Panama"));
        }

        TEST_METHOD(Ex125_Test_isPalindrome1)
        {
            Ex125 ex;
            Assert::IsFalse(ex.isPalindrome("A man, a plan, a canalc: Panama"));
        }

        TEST_METHOD(Ex125_Test_isPalindrome2)
        {
            Ex125 ex;
            Assert::IsTrue(ex.isPalindrome("   "));
        }

        TEST_METHOD(Ex125_Test_isPalindrome3)
        {
            Ex125 ex;
            Assert::IsTrue(ex.isPalindrome(" c "));
        }
    };
}