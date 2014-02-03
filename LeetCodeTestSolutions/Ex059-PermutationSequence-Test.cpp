#include "CppUnitTest.h"
#include "Ex059-PermutationSequence.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex59Test)
    {
    public:

        TEST_METHOD(Ex059_Test_getPermutation)
        {
            Ex59 ex;
            string r = ex.getPermutation(4, 5);
            Assert::AreEqual(string("1423"), r);
        }

        TEST_METHOD(Ex059_Test_getPermutation1)
        {
            Ex59 ex;
            string r = ex.getPermutation(1, 1);
            Assert::AreEqual(string("1"), r);
        }

        TEST_METHOD(Ex059_Test_getPermutation2)
        {
            Ex59 ex;
            string r = ex.getPermutation(2, 1);
            Assert::AreEqual(string("12"), r);
        }
    };
}