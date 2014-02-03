#include "CppUnitTest.h"
#include "Ex146-LRUCache.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTestSolutions
{		
    TEST_CLASS(Ex146Test)
    {
    public:

        TEST_METHOD(Ex146_Test_LRUCache)
        {
            Ex146LRUCache ex(3);
            ex.set(1, 101);
            ex.set(2, 103);
            ex.set(3, 103);
            Assert::AreEqual(101, ex.get(1));
            ex.set(4, 104);
            ex.set(5, 105);
            Assert::AreEqual(-1, ex.get(2));
        }
    };
}