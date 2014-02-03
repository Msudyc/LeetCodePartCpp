#include "CppUnitTest.h"
#include "Ex053-SpiralMatrix.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex53Test)
    {
    public:

        TEST_METHOD(Ex053_Test_spiralOrder)
        {
            Ex53 ex;
            vector<vector<int> >t;
            int r1[] = {1, 2, 3};
            vector<int> row1 (r1, r1 + sizeof(r1)/sizeof(int));
            t.push_back(row1);
            int r2[] = {4, 5, 6};
            vector<int> row2 (r2, r2 + sizeof(r2)/sizeof(int));
            t.push_back(row2);
            int r3[] = {7, 8, 9};
            vector<int> row3 (r3, r3 + sizeof(r3)/sizeof(int));
            t.push_back(row3);

            vector<int> r = ex.spiralOrder(t);
            Assert::AreEqual(1, r[0]);
            Assert::AreEqual(2, r[1]);
            Assert::AreEqual(3, r[2]);
            Assert::AreEqual(6, r[3]);
            Assert::AreEqual(9, r[4]);
            Assert::AreEqual(8, r[5]);
            Assert::AreEqual(7, r[6]);
            Assert::AreEqual(4, r[7]);
            Assert::AreEqual(5, r[8]);
        }

        TEST_METHOD(Ex053_Test_spiralOrder1)
        {
            Ex53 ex;
            vector<vector<int> >t;
            int r1[] = {1, 2};
            vector<int> row1 (r1, r1 + sizeof(r1)/sizeof(int));
            t.push_back(row1);
            int r2[] = {3, 4};
            vector<int> row2 (r2, r2 + sizeof(r2)/sizeof(int));
            t.push_back(row2);

            vector<int> r = ex.spiralOrder(t);
            Assert::AreEqual(1, r[0]);
            Assert::AreEqual(2, r[1]);
            Assert::AreEqual(4, r[2]);
            Assert::AreEqual(3, r[3]);
        }
    };
}