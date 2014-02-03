/*
There are N children standing in a line. Each child is 
assigned a rating value. You are giving candies to these
children subjected to the following requirements: 

.Each child must have at least one candy.
.Children with a higher rating get more candies than 
 their neighbors.

What is the minimum candies you must give? 

class Solution {
public:
    int candy(vector<int> &ratings) {
        
    }
};
*/

#include "Ex135-Candy.h"

namespace LeetCodeTestSolutions
{
    int Ex135::candy(vector<int> &ratings)
    {
        int *candyNum = new int[ratings.size()];
        for(int i = 0; i < (int)ratings.size(); i++) candyNum[i] = 1;
        for(int i = 1; i < (int)ratings.size(); i++)
            if(ratings[i] > ratings[i-1])
                candyNum[i] = candyNum[i-1] + 1;
        for(int i = ratings.size()-2; i>=0; i--)
            if(ratings[i] > ratings[i+1] && candyNum[i] <= candyNum[i+1])
                candyNum[i] = candyNum[i+1] + 1;
        int result = 0;
        for(int i = 0; i < (int)ratings.size(); i++)
            result += candyNum[i];
        delete []candyNum;
        return result;
    }
}