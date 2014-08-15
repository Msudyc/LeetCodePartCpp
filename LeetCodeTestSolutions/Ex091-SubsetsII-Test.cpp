#include "CppUnitTest.h"
#include "Ex091-SubsetsII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex91Test)
    {
    public:

        TEST_METHOD(Ex091_Test_subsetsWithDup)
        {
            Ex91 ex;
            int row0[] = {2, 2, 2, 2};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<vector<int>> r = ex.subsetsWithDup(r0);
            Assert::AreEqual(5, (int)r.size());
        }

        TEST_METHOD(Ex091_Test_subsetsWithDup1)
        {
            Ex91 ex;
            int row0[] = {1};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<vector<int>> r = ex.subsetsWithDup(r0);
            Assert::AreEqual(2, (int)r.size());
        }

        TEST_METHOD(Ex091_Test_subsetsWithDup2)
        {
            Ex91 ex;
            int row0[] = {1, 2, 2, 4, 5};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<vector<int>> r = ex.subsetsWithDup(r0);
            Assert::AreEqual(24, (int)r.size());
        }

        TEST_METHOD(Ex091_Test_subsetsWithDup3)
        {
            Ex91 ex;
            int row0[] = {1, 2, 3};
            vector<int> r0 (row0, row0 + sizeof(row0)/sizeof(int));
            vector<vector<int>> r = ex.subsetsWithDup(r0);
            Assert::AreEqual(8, (int)r.size());
        }
    };
}