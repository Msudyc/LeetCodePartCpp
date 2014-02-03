#include <string>
#include <vector>
using namespace std;

namespace LeetCodeTestSolutions
{
    class Ex68
    {
    public:
        vector<string> fullJustify(vector<string> &words, int L);
        string connect(vector<string> &words, int begin, int end, int len, int L, bool leftJustify) ;
        void addSpaces(string &s, int i, int n, int L, bool leftJustify) ;
    };
}