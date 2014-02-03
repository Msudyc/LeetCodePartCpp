#include "CppUnitTest.h"
#include "Ex011-ContainerWithMostWater.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex11Test)
    {
    public:
        TEST_METHOD(Ex011_Test_maxArea)
        {
		        Ex11 ex;
            vector<int> t;
            t.push_back(2);
            Assert::AreEqual(0, ex.maxArea(t));
            t.push_back(4);
            Assert::AreEqual(2, ex.maxArea(t));
            t.push_back(8);
            Assert::AreEqual(4, ex.maxArea(t));
        }

        TEST_METHOD(Ex011_Test_maxArea1)
        {
		        Ex11 ex;
            vector<int> t;
            t.push_back(2);
            Assert::AreEqual(0, ex.maxArea1(t));
            t.push_back(4);
            Assert::AreEqual(2, ex.maxArea1(t));
            t.push_back(8);
            Assert::AreEqual(4, ex.maxArea1(t));
        }
    };
}