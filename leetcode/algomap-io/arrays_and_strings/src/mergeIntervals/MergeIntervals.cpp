#include <algorithm>
#include <iostream>

#include "MergeIntervals.hpp"

using namespace std;

MergeIntervals::MergeIntervals() {}

vector<vector<int>> MergeIntervals::merge(vector<vector<int>>& intervals) {
    size_t numOfIntervals = intervals.size();

    if (numOfIntervals < 2) {
        return intervals;
    }

    // Sort intervals based on the starting time
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    vector<vector<int>> mergedIntervals;
    int mergedLowerBound = intervals[0][0];
    int mergedHigherBound = intervals[0][1];

    for (size_t i = 1; i < numOfIntervals; i++) {
        int intervalLowerBound = intervals[i][0];
        int intervalHigherBound = intervals[i][1];

        // If does not intersect with merged interval, it's a new interval
        if (intervalLowerBound > mergedHigherBound) {
            mergedIntervals.push_back({mergedLowerBound, mergedHigherBound});
            mergedLowerBound = intervalLowerBound;
            mergedHigherBound = intervalHigherBound;
            continue;
        }

        // If it intersect, we keep the extremum
        if (intervalLowerBound < mergedLowerBound) {
            mergedLowerBound = intervalLowerBound;
        }

        if (intervalHigherBound > mergedHigherBound) {
            mergedHigherBound = intervalHigherBound;
        }
    }

    //Adding last interval
    mergedIntervals.push_back({mergedLowerBound, mergedHigherBound});

    return mergedIntervals;
}