#include "CppUnitTest.h"
#include "Ex-Sample.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{
    TEST_CLASS(ExSampleTest)
    {
    public:
        
        TEST_METHOD(Ex0_Test_Sample)
        {
            ExSample ex;
            Assert::AreEqual(2, ex.Sample(2));
        }
    };
}