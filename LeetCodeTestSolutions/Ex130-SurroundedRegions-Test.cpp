#include "CppUnitTest.h"
#include "Ex130-SurroundedRegions.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex130Test)
    {
    public:

        TEST_METHOD(Ex130_Test_solve)
        {
            Ex130 ex;
            vector<vector<char>> t;
            vector<char> r0;
            vector<char> r1; 
            vector<char> r2; 
            vector<char> r3;             
            r0.push_back('X'); r0.push_back('X'); r0.push_back('X'); r0.push_back('X');
            r1.push_back('X'); r1.push_back('O'); r1.push_back('O'); r1.push_back('X');
            r2.push_back('X'); r2.push_back('X'); r2.push_back('O'); r2.push_back('X');
            r3.push_back('X'); r3.push_back('O'); r3.push_back('X'); r3.push_back('X');
            t.push_back(r0); t.push_back(r1); t.push_back(r2); t.push_back(r3);
            ex.solve(t);
            Assert::AreEqual('X', t[1][1]);
            Assert::AreEqual('X', t[1][2]);
            Assert::AreEqual('X', t[2][2]);
            Assert::AreEqual('O', t[3][1]);
        }

        TEST_METHOD(Ex130_Test_solve1)
        {
            Ex130 ex;
            vector<vector<char>> t;
            vector<char> r0;
            vector<char> r1; 
            vector<char> r2; 
            vector<char> r3;             
            r0.push_back('X'); r0.push_back('O'); r0.push_back('X'); r0.push_back('X');
            r1.push_back('X'); r1.push_back('O'); r1.push_back('O'); r1.push_back('X');
            r2.push_back('X'); r2.push_back('X'); r2.push_back('O'); r2.push_back('X');
            r3.push_back('X'); r3.push_back('O'); r3.push_back('X'); r3.push_back('X');
            t.push_back(r0); t.push_back(r1); t.push_back(r2); t.push_back(r3);
            ex.solve(t);
            Assert::AreEqual('O', t[0][1]);
            Assert::AreEqual('O', t[1][1]);
            Assert::AreEqual('O', t[1][2]);
            Assert::AreEqual('O', t[2][2]);
            Assert::AreEqual('O', t[3][1]);
        }
    };
}