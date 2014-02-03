using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex52
    {
    public:
        int maxSubArray(int A[], int n);
        int maxSubArray1(int A[], int n);
        int maxSubArrayHelper(int A[], int left, int right);
    };
}