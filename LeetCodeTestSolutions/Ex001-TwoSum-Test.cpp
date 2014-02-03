#include <vector>
#include "CppUnitTest.h"
#include "Ex001-TwoSum.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(Ex1Test)
    {
    public:

        TEST_METHOD(Ex001_Test_twoSum)
        {
            Ex1 ex1;
            int num1[] = {2, 7, 11, 15};
            vector<int> numbers1;
            numbers1.assign(num1, num1+4);
            vector<int> result1 = ex1.twoSum(numbers1, 9);
            Assert::AreEqual(1, result1[0]);
            Assert::AreEqual(2, result1[2]);
        }
        
        TEST_METHOD(Ex001_Test_twoSum1)
        {
            Ex1 ex1;
            int num1[] = {3, 2, 4};
            vector<int> numbers1;
            numbers1.assign(num1, num1+3);
            vector<int> result1 = ex1.twoSum(numbers1, 6);
            Assert::AreEqual(2, result1[0]);
            Assert::AreEqual(3, result1[2]);
        }
    };
}