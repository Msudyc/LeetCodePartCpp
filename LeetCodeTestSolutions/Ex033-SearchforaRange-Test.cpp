#include "CppUnitTest.h"
#include "Ex033-SearchforaRange.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex33Test)
    {
    public:

        TEST_METHOD(Ex033_Test_searchRange)
        {
            Ex33 ex;
            int t[] = {5, 7, 7, 8, 8, 10};
            vector<int> r = ex.searchRange(t, 6, 8);
            Assert::AreEqual(3, r[0]);
            Assert::AreEqual(4, r[1]);
        }

        TEST_METHOD(Ex033_Test_searchRange1)
        {
            Ex33 ex;
            int t[] = {5, 5};
            vector<int> r = ex.searchRange(t, 2, 5);
            Assert::AreEqual(0, r[0]);
            Assert::AreEqual(1, r[1]);
        }

        TEST_METHOD(Ex033_Test_searchRange2)
        {
            Ex33 ex;
            int t[] = {1, 5};
            vector<int> r = ex.searchRange(t, 2, 5);
            Assert::AreEqual(1, r[0]);
            Assert::AreEqual(1, r[1]);
        }

        TEST_METHOD(Ex033_Test_searchRange3)
        {
            Ex33 ex;
            int t[] = {1, 5};
            vector<int> r = ex.searchRange(t, 2, 8);
            Assert::AreEqual(-1, r[0]);
            Assert::AreEqual(-1, r[1]);
        }

        TEST_METHOD(Ex033_Test_searchRange4)
        {
            Ex33 ex;
            int t[] = {0};
            vector<int> r = ex.searchRange(t, 0, 8);
            Assert::AreEqual(-1, r[0]);
            Assert::AreEqual(-1, r[1]);
        }

        TEST_METHOD(Ex033_Test_searchRange5)
        {
            Ex33 ex;
            int t[] = {8};
            vector<int> r = ex.searchRange(t, 0, 9);
            Assert::AreEqual(-1, r[0]);
            Assert::AreEqual(-1, r[1]);
        }
    };
}