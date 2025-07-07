#ifndef SUMMARYRANGES_HPP
#define SUMMARYRANGES_HPP

#include <vector>
#include <string>

class SummaryRanges
{
public:
    SummaryRanges();
    std::vector<std::string> summaryRanges(std::vector<int>& nums);
private:
    std::string createRangeString(int rangeLowestValue, int rangeHighestValue);
};

#endif  // SUMMARYRANGES_HPP