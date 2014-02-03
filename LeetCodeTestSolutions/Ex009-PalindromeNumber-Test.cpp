#include "CppUnitTest.h"
#include "Ex009-PalindromeNumber.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex9Test)
    {
    public:

        TEST_METHOD(Ex009_Test_isPalindrome)
        {
		        Ex9 ex;
            Assert::IsTrue(ex.isPalindrome(0));
            Assert::IsFalse(ex.isPalindrome(-12));
            Assert::IsTrue(ex.isPalindrome(121));
            Assert::IsFalse(ex.isPalindrome(1123));
            Assert::IsTrue(ex.isPalindrome(986121689));
            Assert::IsTrue(ex.isPalindrome(1001));
            Assert::IsTrue(ex.isPalindrome(1000110001));
        }

        TEST_METHOD(Ex009_Test_isPalindrome1)
        {
		        Ex9 ex;
            Assert::IsFalse(ex.isPalindrome(10));
        }
    };
}