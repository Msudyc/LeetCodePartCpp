/*
Given two words word1 and word2, find the minimum number 
of steps required to convert word1 to word2. (each operation
is counted as 1 step.) 

You have the following 3 operations permitted on a word: 

a) Insert a character
b) Delete a character
c) Replace a character

class Solution {
public:
    int minDistance(string word1, string word2) {
        
    }
};
*/

#include <vector>
#include "Ex072-EditDistance.h"

namespace LeetCodeTestSolutions
{
    int Ex72::minDistance(string word1, string word2)
    {
        int len1 = word1.size();
        int len2 = word2.size();         
        vector<vector<int> > table(len1 + 1, vector<int>(len2 + 1, 0));         
        for (int i = 1; i <= len1; i++) table[i][0] = i;         
        for (int j = 1; j <= len2; j++) table[0][j] = j;
         
        for(int i = 0; i < len1; i++)
            for (int j = 0; j < len2; j++)
            {                         
                table[i+1][j+1] = min(table[i+1][j], table[i][j+1]) + 1;
                if (word1[i] == word2[j]) table[i+1][j+1] = min(table[i+1][j+1], table[i][j]);
                else table[i+1][j+1] = min(table[i+1][j+1], table[i][j] + 1);
            }
         
        return table[len1][len2];
    }
}