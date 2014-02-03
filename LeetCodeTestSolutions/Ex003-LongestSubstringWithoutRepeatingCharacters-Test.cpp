#include <string>
#include "CppUnitTest.h"
#include "Ex003-LongestSubstringWithoutRepeatingCharacters.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex3Test)
    {
    public:
        TEST_METHOD(Ex003_Test_lengthOfLongestSubstring)
        {
            Ex3 ex;
            string a = "abcbdebc";
            Assert::AreEqual(4, ex.lengthOfLongestSubstring(a));
        }

        TEST_METHOD(Ex003_Test_lengthOfLongestSubstring1)
        {
            Ex3 ex;
            string a = "bbbbbbbb";
            Assert::AreEqual(1, ex.lengthOfLongestSubstring(a));
        }

        TEST_METHOD(Ex003_Test_lengthOfLongestSubstring2)
        {
            Ex3 ex;
            string a = "";
            Assert::AreEqual(0, ex.lengthOfLongestSubstring(a));
        }
    };
}