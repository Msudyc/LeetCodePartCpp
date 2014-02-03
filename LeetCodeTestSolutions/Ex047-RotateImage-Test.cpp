#include "CppUnitTest.h"
#include "Ex047-RotateImage.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex47Test)
    {
    public:

        TEST_METHOD(Ex047_Test_rotate)
        {
            Ex47 ex;
            vector<vector<int>> t;
            vector<int> row1;
            row1.push_back(1); row1.push_back(2); row1.push_back(3);
            t.push_back(row1);
            vector<int> row2;
            row2.push_back(1); row2.push_back(2); row2.push_back(3);
            t.push_back(row2);
            vector<int> row3;
            row3.push_back(1); row3.push_back(2); row3.push_back(3);
            t.push_back(row3);
            ex.rotate(t);
            Assert::AreEqual(1, t[0][0]);
            Assert::AreEqual(1, t[0][1]);
            Assert::AreEqual(1, t[0][2]);
            Assert::AreEqual(2, t[1][0]);
            Assert::AreEqual(2, t[1][1]);
            Assert::AreEqual(2, t[1][2]);
            Assert::AreEqual(3, t[2][0]);
            Assert::AreEqual(3, t[2][1]);
            Assert::AreEqual(3, t[2][2]);
        }

        TEST_METHOD(Ex047_Test_rotate1)
        {
            Ex47 ex;
            vector<vector<int>> t;
            vector<int> row1;
            row1.push_back(1); row1.push_back(2); 
            t.push_back(row1);
            vector<int> row2;
            row2.push_back(1); row2.push_back(2); 
            t.push_back(row2);
            ex.rotate(t);
            Assert::AreEqual(1, t[0][0]);
            Assert::AreEqual(1, t[0][1]);
            Assert::AreEqual(2, t[1][0]);
            Assert::AreEqual(2, t[1][0]);
        }
    };
}