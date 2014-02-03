#include "CppUnitTest.h"
#include "Ex120-Triangle.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex120Test)
    {
    public:

        TEST_METHOD(Ex120_Test_minimumTotal)
        {
            Ex120 ex;
            vector<vector<int>> t;
            vector<int> r0; r0.push_back(2);
            vector<int> r1; r1.push_back(3); r1.push_back(4);
            vector<int> r2; r2.push_back(6); r2.push_back(5); r2.push_back(7);
            vector<int> r3; r3.push_back(4); r3.push_back(1); r3.push_back(8); r3.push_back(3);
            t.push_back(r0); t.push_back(r1); t.push_back(r2); t.push_back(r3); 
            Assert::AreEqual(11, ex.minimumTotal(t));
        }
    };
}