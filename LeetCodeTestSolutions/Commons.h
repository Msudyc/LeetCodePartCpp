#include <cstdlib>
#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    struct ListNode 
    {
    public:
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    
    struct Interval 
    {
        int start;
        int end;
        Interval() : start(0), end(0) {}
        Interval(int s, int e) : start(s), end(e) {}
    };

    struct TreeNode 
    {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    struct TreeLinkNode 
    {
        int val;
        TreeLinkNode *left, *right, *next;
        TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
    };

    struct UndirectedGraphNode 
    {
        int label;
        vector<UndirectedGraphNode *> neighbors;
        UndirectedGraphNode(int x) : label(x) {};
    };

    struct RandomListNode 
    {
        int label;
        RandomListNode *next, *random;
        RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
    };

    struct Point 
    {
        int x;
        int y;
        Point() : x(0), y(0) {}
        Point(int a, int b) : x(a), y(b) {}
    };
}