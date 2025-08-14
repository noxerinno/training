#include <iostream>
#include <unordered_set>

#include "LongestConsecutiveSequence.hpp"

using namespace std;

LongestConsecutiveSequence::LongestConsecutiveSequence() {}

// int LongestConsecutiveSequence::longestConsecutive(vector<int>& nums) {
//     int result = 0;
    
//     set<int> sortedNums(nums.begin(), nums.end());

//     int previousNum = *sortedNums.begin() - 1;
//     int currentSequenceLength = 0;
    
//     for (const int& num : sortedNums) {
//         if (previousNum + 1!= num) {
//             if (currentSequenceLength > result) {
//                 result = currentSequenceLength;
//             }

//             currentSequenceLength = 1;
//             previousNum = num;
//             continue;
//         }
        
//         currentSequenceLength++;
//         previousNum = num;
//     }

//     if (currentSequenceLength > result) {
//         result = currentSequenceLength;
//     }

//     return result;
// }

int LongestConsecutiveSequence::longestConsecutive(vector<int>& nums) {
    int result = 0;
    unordered_set<int> sortedNums(nums.begin(), nums.end());
    
    for (int num : sortedNums) {
        if (sortedNums.find(num - 1) == sortedNums.end()) {
            int currentSequenceLength = 1;
            int nextNum = num + 1;

            while(sortedNums.find(nextNum) != sortedNums.end()) {
                currentSequenceLength++;
                nextNum++;
            }
            
            if (currentSequenceLength > result) {
                result = currentSequenceLength;
            }
        }
    }

    return result;
}