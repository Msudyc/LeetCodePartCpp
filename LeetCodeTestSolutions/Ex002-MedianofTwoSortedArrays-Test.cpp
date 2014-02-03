#include "CppUnitTest.h"
#include "Ex002-MedianofTwoSortedArrays.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
	TEST_CLASS(Ex2Test)
	{
	public:
        
        TEST_METHOD(Ex002_Test_findMedianSortedArrays)
		{
            Ex2 ex2;
            int A[] = {1, 3, 5, 7};
            int B[] = {2, 4, 6};
            double result = ex2.findMedianSortedArrays(A, 4, B, 3);
            Assert::AreEqual(4.0, result);
        }
        
        TEST_METHOD(Ex002_Test_findMedianSortedArrays1)
		{
            Ex2 ex2;
            int A[] = {1, 3};
            int B[] = {2};
            double result = ex2.findMedianSortedArrays(A, 2, B, 1);
            Assert::AreEqual(2.0, result);
        }
        
        TEST_METHOD(Ex002_Test_findMedianSortedArrays2)
		{
            Ex2 ex2;
            int A[] = {1, 4};
            int B[] = {2, 3};
            double result = ex2.findMedianSortedArrays(A, 2, B, 2);
            Assert::AreEqual(2.5, result);
        }
    };
}