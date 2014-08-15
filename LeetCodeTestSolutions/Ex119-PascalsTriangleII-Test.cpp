#include "CppUnitTest.h"
#include "Ex119-PascalsTriangleII.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex119Test)
    {
    public:

        TEST_METHOD(Ex119_Test_getRow)
        {
            Ex119 ex;
            vector<int> r = ex.getRow(3);
        }
    };
}