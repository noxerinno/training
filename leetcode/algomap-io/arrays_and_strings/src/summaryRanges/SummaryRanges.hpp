#ifndef SUMMARYRANGES_H
#define SUMMARYRANGES_H

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

#endif  // SUMMARYRANGES_H