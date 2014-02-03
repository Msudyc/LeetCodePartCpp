/*
Given an array of words and a length L, format the text 
such that each line has exactly L characters and is fully 
(left and right) justified. 

You should pack your words in a greedy approach; that is, pack 
as many words as you can in each line. Pad extra spaces ' ' 
when necessary so that each line has exactly L characters. 

Extra spaces between words should be distributed as evenly
as possible. If the number of spaces on a line do not divide 
evenly between words, the empty slots on the left will be 
assigned more spaces than the slots on the right. 

For the last line of text, it should be left justified and 
no extra space is inserted between words. 

For example,
words: ["This", "is", "an", "example", "of", "text", "justification."]
L: 16. 

Return the formatted lines as:

[
   "This    is    an",
   "example  of text",
   "justification.  "
]



Note: Each word is guaranteed not to exceed L in length. 

Corner Cases: 

.A line other than the last line might contain only one
 word. What should you do in this case? In this case, 
 that line should be left-justified.

class Solution {
public:
    vector<string> fullJustify(vector<string> &words, int L) {
        
    }
};
*/

#include "Ex068-TextJustification.h"

namespace LeetCodeTestSolutions
{
    vector<string> Ex68::fullJustify(vector<string> &words, int L)
    {
        vector<string> ret;
        int begin = 0, len = 0, n = words.size();
        for (int i = 0; i < n; i++) 
        {
            if (len + (int)words[i].size() + (i - begin) > L) 
            {
                ret.push_back(connect(words, begin, i - 1, len, L, false));
                begin = i;
                len = 0;
            }

            len += (int)words[i].size();
        }

        ret.push_back(connect(words, begin, n - 1, len, L, true));
        return ret;
    }

    string Ex68::connect(vector<string> &words, int begin, int end, int len, int L, bool leftJustify) 
    {
        string s;
        int n = end - begin + 1;
        for (int i = 0; i < n; ++i) 
        {
            s += words[begin + i];
            addSpaces(s, i, n - 1, L - len, leftJustify);
        }

        if ((int)s.size() < L) s.append(L - (int)s.size(), ' ');
        return s;
    }

    void Ex68::addSpaces(string &s, int i, int n, int L, bool leftJustify) 
    {
        if (n < 1 || i > n - 1) return;
        int spaces = leftJustify ? 1 : (L / n + (i < (L % n) ? 1 : 0));
        s.append(spaces, ' ');
    }
}