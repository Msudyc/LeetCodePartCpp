#include <string>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex5
    {
    public:
        string longestPalindrome(string s);
        string longestPalindrome1(string s);
        string longestPalindrome2(string s);
        string longestPalindrome3(string s);
        string preProcess(string s);
        string expandAroundCenter(string s, int c1, int c2);
        bool IsPalindrome(const string &s, int i, int j);
    };
}