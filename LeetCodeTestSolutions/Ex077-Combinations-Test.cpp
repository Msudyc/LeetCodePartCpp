#include "CppUnitTest.h"
#include "Ex077-Combinations.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex77Test)
    {
    public:

        TEST_METHOD(Ex077_Test_combine)
        {
            Ex77 ex;
            vector<vector<int> > ret = ex.combine(4, 2);
            Assert::AreEqual(6, (int)ret.size());
        }

        TEST_METHOD(Ex077_Test_combine1)
        {
            Ex77 ex;
            vector<vector<int> > ret = ex.combine(2, 2);
            Assert::AreEqual(1, (int)ret.size());
        }

        TEST_METHOD(Ex077_Test_combine2)
        {
            Ex77 ex;
            vector<vector<int> > ret = ex.combine(5, 2);
            Assert::AreEqual(10, (int)ret.size());
        }

        TEST_METHOD(Ex077_Test_combine3)
        {
            Ex77 ex;
            vector<vector<int> > ret = ex.combine(7, 2);
            Assert::AreEqual(21, (int)ret.size());
        }
    };
}