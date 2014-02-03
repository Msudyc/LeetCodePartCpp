#include "CppUnitTest.h"
#include "Ex018-LetterCombinationsofaPhoneNumber.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex18Test)
    {
    public:

        TEST_METHOD(Ex018_Test_letterCombinations)
        {
            Ex18 ex;
            vector<string> r = ex.letterCombinations(string("23"));
            Assert::AreEqual(9, (int)r.size());
        }

        TEST_METHOD(Ex018_Test_letterCombinations1)
        {
            Ex18 ex;
            vector<string> r = ex.letterCombinations(string("27"));
            Assert::AreEqual(12, (int)r.size());
        }

        TEST_METHOD(Ex018_Test_letterCombinations2)
        {
            Ex18 ex;
            vector<string> r = ex.letterCombinations(string("279"));
            Assert::AreEqual(48, (int)r.size());
        }
    };
}