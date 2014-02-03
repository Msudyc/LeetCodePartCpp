#include "CppUnitTest.h"
#include "Ex085-MaximalRectangle.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex85Test)
    {
    public:

        TEST_METHOD(Ex085_Test_maximalRectangle)
        {
            Ex85 ex;
            vector<vector<char>> t;
            vector<char> row0, row1, row2;
            row0.push_back('0'); row0.push_back('0'); row0.push_back('0'); row0.push_back('0');
            row1.push_back('0'); row1.push_back('0'); row1.push_back('1'); row1.push_back('1');
            row2.push_back('0'); row2.push_back('0'); row2.push_back('1'); row2.push_back('1');
            t.push_back(row0); t.push_back(row1); t.push_back(row2); 
            Assert::AreEqual(4, ex.maximalRectangle(t));
        }

        TEST_METHOD(Ex085_Test_maximalRectangle1)
        {
            Ex85 ex;
            vector<vector<char>> t;
            vector<char> row0, row1, row2;
            row0.push_back('0'); row0.push_back('0'); row0.push_back('0'); row0.push_back('0');
            row1.push_back('0'); row1.push_back('0'); row1.push_back('0'); row1.push_back('1');
            row2.push_back('0'); row2.push_back('0'); row2.push_back('0'); row2.push_back('1');
            t.push_back(row0); t.push_back(row1); t.push_back(row2); 
            Assert::AreEqual(2, ex.maximalRectangle(t));
        }

        TEST_METHOD(Ex085_Test_maximalRectangle2)
        {
            Ex85 ex;
            vector<vector<char>> t;
            vector<char> row0, row1, row2;
            row0.push_back('0'); row0.push_back('0'); row0.push_back('0'); row0.push_back('0');
            row1.push_back('0'); row1.push_back('0'); row1.push_back('0'); row1.push_back('0');
            row2.push_back('0'); row2.push_back('0'); row2.push_back('0'); row2.push_back('1');
            t.push_back(row0); t.push_back(row1); t.push_back(row2); 
            Assert::AreEqual(1, ex.maximalRectangle(t));
        }

        TEST_METHOD(Ex085_Test_maximalRectangle3)
        {
            Ex85 ex;
            vector<vector<char>> t;
            vector<char> row0, row1, row2;
            row0.push_back('0'); row1.push_back('0'); row2.push_back('0');
            t.push_back(row0); t.push_back(row1); t.push_back(row2); 
            Assert::AreEqual(0, ex.maximalRectangle(t));
        }

        TEST_METHOD(Ex085_Test_maximalRectangle4)
        {
            Ex85 ex;
            vector<vector<char>> t;
            vector<char> row0, row1, row2;
            t.push_back(row0); t.push_back(row1); t.push_back(row2); 
            Assert::AreEqual(0, ex.maximalRectangle(t));
        }
    };
}