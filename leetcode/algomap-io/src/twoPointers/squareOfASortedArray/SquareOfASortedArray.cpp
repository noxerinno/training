#include <algorithm>

#include "SquareOfASortedArray.hpp"

using namespace std;

SquareOfASortedArray::SquareOfASortedArray() {}

// vector<int> SquareOfASortedArray::sortedSquares(vector<int>& nums) {
//     vector<int> result;
    
//     for (const int& num : nums) {
//         int square = num * num;

//         if (result.empty()) {
//             result.push_back(square);
//         } else {
//             result.insert(lower_bound(result.begin(), result.end(), square), square);
//         }
//     }

//     return result;
// }


vector<int> SquareOfASortedArray::sortedSquares(vector<int>& nums) {
    int numSize = nums.size();
    vector<int> result(numSize);
    int left = 0, right = numSize - 1;
    int index = numSize - 1;

    
    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            result[index--] = nums[left] * nums[left];
            left++;
        } else {
            result[index--] = nums[right] * nums[right];
            right--;
        }
    }

    return result;
}