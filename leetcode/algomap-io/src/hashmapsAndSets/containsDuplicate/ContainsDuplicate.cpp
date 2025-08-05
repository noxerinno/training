#include <unordered_set>

#include "ContainsDuplicate.hpp"

using namespace std;

ContainsDuplicate::ContainsDuplicate() {}

bool ContainsDuplicate::containsDuplicate(vector<int>& nums) {
    if (nums.empty()) {
        return false;
    }

    unordered_set<int> seenNums;

    for (int num : nums) {
        if (seenNums.find(num) != seenNums.end()) {
            return true;
        }

        seenNums.insert(num);
    }

    return false;
}