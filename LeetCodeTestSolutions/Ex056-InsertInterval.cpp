/*
Given a set of non-overlapping intervals, insert a new 
interval into the intervals (merge if necessary).

You may assume that the intervals were initially sorted 
according to their start times.

Example 1:
 Given intervals [1,3],[6,9], insert and merge [2,5] in 
 as [1,5],[6,9]. 

Example 2:
 Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and 
 merge [4,9] in as [1,2],[3,10],[12,16]. 

This is because the new interval [4,9] overlaps 
 with [3,5],[6,7],[8,10]. 

class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        
    }
};
*/

#include "Ex056-InsertInterval.h"

namespace LeetCodeTestSolutions
{
    vector<Interval> Ex56::insert(vector<Interval> &intervals, Interval newInterval)
    {
        vector<Interval> v;
        int i = 0, n = intervals.size();
        while(i < n && newInterval.start > intervals[i].end)
            v.push_back(intervals[i++]);

        while(i < n && newInterval.end >= intervals[i].start) 
        {
            newInterval.end = max(newInterval.end, intervals[i].end);
            newInterval.start = min(newInterval.start, intervals[i].start);
            i++;        
        }
        
        v.push_back(newInterval);
        while(i < n) v.push_back(intervals[i++]);
        return v;
    }
}