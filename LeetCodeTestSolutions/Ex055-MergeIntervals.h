#include <vector>
#include "Commons.h"
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex55
    {
    public:
        vector<Interval> merge(vector<Interval> &intervals);
        static bool isLower(const Interval &v1, const Interval &v2);
    };
}