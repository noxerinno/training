#include <unordered_map>

#include "MajorityElement.hpp"

using namespace std;

MajorityElement::MajorityElement() {}

int MajorityElement::majorityElement(vector<int>& nums) {
    if (nums.size() == 1) {
        return nums[0];
    }

    unordered_map<int, size_t> numsCount;

    for (const int& num : nums) {
        numsCount[num]++;

        if (numsCount[num] > nums.size() / 2) {
            return num;
        }
    }

    return 0;
}