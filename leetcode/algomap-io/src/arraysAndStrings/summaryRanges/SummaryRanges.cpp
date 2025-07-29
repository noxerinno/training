#include "SummaryRanges.hpp"

using namespace std;

SummaryRanges::SummaryRanges() {}

vector<string> SummaryRanges::summaryRanges(vector<int>& nums) {
    vector<string> summaryRanges;
    
    if (nums.empty()) {
        return summaryRanges;
    }

    if (nums.size() == 1) {
        summaryRanges.push_back(to_string(nums[0]));
        return summaryRanges;
    }

    int previousNum = nums[0];
    int rangeLowestValue = previousNum;

    for (size_t i = 1; i < nums.size(); i++) {
        int currentNum = nums[i];
        
        if (currentNum - 1 == previousNum) {
            previousNum = currentNum;
            continue;
        }

        summaryRanges.push_back(createRangeString(rangeLowestValue, previousNum));
        
        previousNum = currentNum;
        rangeLowestValue = currentNum;
    }

    summaryRanges.push_back(createRangeString(rangeLowestValue, previousNum));
    return summaryRanges;
}

string SummaryRanges::createRangeString(int rangeLowestValue, int rangeHighestValue) {
    if (rangeLowestValue == rangeHighestValue) {
            return to_string(rangeHighestValue);
        } else {
            return to_string(rangeLowestValue) + "->" + to_string(rangeHighestValue);
        }
}