/*
Given a collection of intervals, merge all overlapping intervals.

For example,
 Given [1,3],[2,6],[8,10],[15,18],
 return [1,6],[8,10],[15,18]. 

 Definition for an interval.
  struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };

class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        
    }
};
*/

#include <algorithm>
#include "Ex055-MergeIntervals.h"

namespace LeetCodeTestSolutions
{
    vector<Interval> Ex55::merge(vector<Interval> &intervals)
    {
        vector<Interval> res;
        sort(intervals.begin(), intervals.end(), isLower);
        int i = 0, n = intervals.size();
        while(i < n) 
        {
            res.push_back(intervals[i++]);
            while(i < n && intervals[i].start <= res.back().end)
                res.back().end = max(res.back().end, intervals[i++].end);
        }
        
        return res;
    }

    bool Ex55::isLower(const Interval &v1, const Interval &v2) 
    { 
        return v1.start < v2.start; 
    }
}