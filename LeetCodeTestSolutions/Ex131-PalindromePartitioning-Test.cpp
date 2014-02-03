#include "CppUnitTest.h"
#include "Ex131-PalindromePartitioning.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex131Test)
    {
    public:

        TEST_METHOD(Ex131_Test_partition)
        {
            Ex131 ex;
            vector<vector<string>> res = ex.partition("aab");
            Assert::AreEqual(2, (int)res.size());
        }

        TEST_METHOD(Ex131_Test_partition1)
        {
            Ex131 ex;
            vector<vector<string>> res = ex.partition("aa");
            Assert::AreEqual(2, (int)res.size());
        }

        TEST_METHOD(Ex131_Test_partition2)
        {
            Ex131 ex;
            vector<vector<string>> res = ex.partition("a");
            Assert::AreEqual(1, (int)res.size());
        }

        TEST_METHOD(Ex131_Test_partition3)
        {
            Ex131 ex;
            vector<vector<string>> res = ex.partition("");
            Assert::AreEqual(1, (int)res.size());
        }
    };
}