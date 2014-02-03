#include "CppUnitTest.h"
#include "Ex030-NextPermutation.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex30Test)
    {
    public:

        TEST_METHOD(Ex030_Test_nextPermutation)
        {
            Ex30 ex;
            vector<int> t;
            t.push_back(1); t.push_back(2); t.push_back(3);
            ex.nextPermutation(t);
            Assert::AreEqual(1, t[0]);
            Assert::AreEqual(3, t[1]);
            Assert::AreEqual(2, t[2]);
        }

        TEST_METHOD(Ex030_Test_nextPermutation1)
        {
            Ex30 ex;
            vector<int> t;
            t.push_back(3); t.push_back(2); t.push_back(1);
            ex.nextPermutation(t);
            Assert::AreEqual(1, t[0]);
            Assert::AreEqual(2, t[1]);
            Assert::AreEqual(3, t[2]);
        }
    };
}