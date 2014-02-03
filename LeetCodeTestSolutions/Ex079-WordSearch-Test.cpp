#include "CppUnitTest.h"
#include "Ex079-WordSearch.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex79Test)
    {
    public:

        TEST_METHOD(Ex079_Test_exist)
        {
            Ex79 ex;
            vector<vector<char>> t;
            vector<char> r0; 
            r0.push_back('A'); r0.push_back('B'); r0.push_back('C'); r0.push_back('E');
            t.push_back(r0);
            vector<char> r1;
            r1.push_back('S'); r1.push_back('F'); r1.push_back('C'); r1.push_back('S');
            t.push_back(r0);
            vector<char> r2;
            r2.push_back('A'); r2.push_back('D'); r2.push_back('E'); r2.push_back('E');
            t.push_back(r2);
            Assert::IsTrue(ex.exist(t, "ABCCED"));
        }

        TEST_METHOD(Ex079_Test_exist1)
        {
            Ex79 ex;
            vector<vector<char>> t;
            vector<char> r0; 
            r0.push_back('A'); r0.push_back('B'); r0.push_back('C'); r0.push_back('E');
            t.push_back(r0);
            vector<char> r1;
            r1.push_back('S'); r1.push_back('F'); r1.push_back('C'); r1.push_back('S');
            t.push_back(r0);
            vector<char> r2;
            r2.push_back('A'); r2.push_back('D'); r2.push_back('E'); r2.push_back('E');
            t.push_back(r2);
            Assert::IsTrue(ex.exist(t, "ABC"));
        }

        TEST_METHOD(Ex079_Test_exist2)
        {
            Ex79 ex;
            vector<vector<char>> t;
            vector<char> r0; 
            r0.push_back('A'); r0.push_back('B'); r0.push_back('C'); r0.push_back('E');
            t.push_back(r0);
            vector<char> r1;
            r1.push_back('S'); r1.push_back('F'); r1.push_back('C'); r1.push_back('S');
            t.push_back(r0);
            vector<char> r2;
            r2.push_back('A'); r2.push_back('D'); r2.push_back('E'); r2.push_back('E');
            t.push_back(r2);
            Assert::IsFalse(ex.exist(t, "ABCB"));
        }

        TEST_METHOD(Ex079_Test_exist3)
        {
            Ex79 ex;
            vector<vector<char>> t;
            vector<char> r0; 
            r0.push_back('A'); r0.push_back('B'); r0.push_back('C'); r0.push_back('E');
            t.push_back(r0);
            vector<char> r1;
            r1.push_back('S'); r1.push_back('F'); r1.push_back('C'); r1.push_back('S');
            t.push_back(r0);
            vector<char> r2;
            r2.push_back('A'); r2.push_back('D'); r2.push_back('E'); r2.push_back('E');
            t.push_back(r2);
            Assert::IsFalse(ex.exist(t, "XYCZ"));
        }
    };
}