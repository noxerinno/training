#include <algorithm>
#include <unordered_map>

#include "TwoSum.hpp"

using namespace std;

TwoSum::TwoSum() {}

// vector<int> TwoSum::twoSum(vector<int>& nums, int target) {
//     if (nums.size() == 2) {
//         return {0,1};
//     }
    
//     set<int> sortedNums(nums.begin(), nums.end());

//     //DEGUG
//     //TODO: Delete this section & iostream include
//     cout << "Set : [";
//     for (int num : sortedNums) {
//         cout << num << ',';
//     }
//     cout << ']' << endl << endl;

//     for (int num : sortedNums) {
//         if (abs(num) > abs(target)) {
//             break;
//         }

//         if (sortedNums.find(target - num) != sortedNums.end()) {
//             vector<int>::iterator firstOperandIt = find(nums.begin(), nums.end(), num);
//             vector<int>::iterator secondOperandIt = find(firstOperandIt + 1, nums.end(), target - num);

//             return {static_cast<int>(firstOperandIt - nums.begin()),
//                     static_cast<int>(secondOperandIt - nums.begin())};
//         }
//     }

//     return {-1, -1};
// }

// vector<int> TwoSum::twoSum(vector<int>& nums, int target) {
//     if (nums.size() == 2) {
//         return {0,1};
//     }

//     for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
//         if (find(next(it), nums.end(), target - *it) != nums.end()){
//             vector<int>::iterator nextIt = find(next(it), nums.end(), target - *it);
            
//             return {static_cast<int>(it - nums.begin()),
//                     static_cast<int>(nextIt - nums.begin())};
//         }
//     }

//     return {-1, -1};
// }

vector<int> TwoSum::twoSum(vector<int>& nums, int target) {
    if (nums.size() == 2) {
        return {0,1};
    }

    unordered_map<int, int> mappedNums;

    for (size_t i = 0; i < nums.size(); i++) {
        mappedNums[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++) {
        int delta = target - nums[i];

        if (mappedNums.find(delta) != mappedNums.end() && mappedNums[delta] != i) {
            return {i, mappedNums[delta]};
        }
    }
    
    return {-1, -1};
}