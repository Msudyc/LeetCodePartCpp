#include "CppUnitTest.h"
#include "Ex067-PlusOne.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex67Test)
    {
    public:

        TEST_METHOD(Ex067_Test_plusOne)
        {
            Ex67 ex;
            int row0[] = {1, 0, 1, 0, 0, 1};
            vector<int> t (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r = ex.plusOne(t);
            Assert::AreEqual(6, (int)r.size());
            Assert::AreEqual(1, r[0]);
            Assert::AreEqual(0, r[1]);
            Assert::AreEqual(1, r[2]);
            Assert::AreEqual(0, r[3]);
            Assert::AreEqual(0, r[4]);
            Assert::AreEqual(2, r[5]);
        }

        TEST_METHOD(Ex067_Test_plusOne1)
        {
            Ex67 ex;
            int row0[] = {9, 9, 9, 9, 9, 9};
            vector<int> t (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r = ex.plusOne(t);
            Assert::AreEqual(7, (int)r.size());
            Assert::AreEqual(1, r[0]);
            Assert::AreEqual(0, r[1]);
            Assert::AreEqual(0, r[2]);
            Assert::AreEqual(0, r[3]);
            Assert::AreEqual(0, r[4]);
            Assert::AreEqual(0, r[5]);
            Assert::AreEqual(0, r[6]);
        }

        TEST_METHOD(Ex067_Test_plusOne2)
        {
            Ex67 ex;
            int row0[] = {1, 9, 9, 9, 9, 8};
            vector<int> t (row0, row0 + sizeof(row0)/sizeof(int));
            vector<int> r = ex.plusOne(t);
            Assert::AreEqual(6, (int)r.size());
            Assert::AreEqual(1, r[0]);
            Assert::AreEqual(9, r[1]);
            Assert::AreEqual(9, r[2]);
            Assert::AreEqual(9, r[3]);
            Assert::AreEqual(9, r[4]);
            Assert::AreEqual(9, r[5]);
        }
    };
}