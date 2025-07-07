#ifndef MERGEINTERVALS_HPP
#define MERGEINTERVALS_HPP

#include <vector>

class MergeIntervals
{
public:
    MergeIntervals();
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals);
};

#endif  // MERGEINTERVALS_HPP