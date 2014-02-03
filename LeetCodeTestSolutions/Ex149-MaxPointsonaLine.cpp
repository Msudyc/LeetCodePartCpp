/*
Given n points on a 2D plane, find the maximum number of 
points that lie on the same straight line.

class Solution {
public:
    int maxPoints(vector<Point> &points) {
        
    }
};
*/

#include "Ex149-MaxPointsonaLine.h"

namespace LeetCodeTestSolutions
{
    int Ex149::maxPoints(vector<Point> &points)
    {
        if(points.size() < 3) return points.size();
        int count = 0, max = 0;
        for(int i = 0; i < (int)points.size() - 1; i++)
        {
            for(int j = i + 1; j < (int)points.size(); j++)
            {
                int sign=0, a, b, c;
                if(points[i].x == points[j].x) sign=1;
                else
                {
                    a = points[j].x - points[i].x;
                    b=points[j].y - points[i].y;
                    c=a * points[i].y - b*points[i].x;
                }
                
                int len=0;
                for(int k = 0; k < (int)points.size(); k++)
                    if((0 == sign && a * points[k].y == c + b * points[k].x) || 
                        (1 == sign && points[k].x == points[j].x)) len++;
                if(len > max) max = len;
            }
        }
        
        return max;
    }
}