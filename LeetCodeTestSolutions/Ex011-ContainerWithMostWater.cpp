/*
Given n non-negative integers a1, a2, ..., an, where each 
represents a point at coordinate (i, ai). n vertical lines 
are drawn such that the two endpoints of line i is at (i, ai) 
and (i, 0). Find two lines, which together with x-axis forms 
a container, such that the container contains the most water. 

Note: You may not slant the container. 

class Solution {
public:
    int maxArea(vector<int> &height) {
        
    }
};
*/

#include "Ex011-ContainerWithMostWater.h"

namespace LeetCodeTestSolutions
{
    int Ex11::maxArea(vector<int> &height)
    {
        // brute force
        int n = height.size();
        int smax = 0;

        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int s = min(height[j], height[i]) * (j-i);
                smax = max(smax, s);
            }
        }

        return smax;
    }
    
    int Ex11::maxArea1(vector<int> &height)
    {
        // greedy
        int n = height.size();
        int smax = 0;
        int i = 0, j = n-1;
        while(i < j)
        {
            int s = min(height[j], height[i]) * (j-i);
            smax = max(smax, s);
            if(height[j] > height[i]) i++;
            else j--;
        }

        return smax;
    }
}