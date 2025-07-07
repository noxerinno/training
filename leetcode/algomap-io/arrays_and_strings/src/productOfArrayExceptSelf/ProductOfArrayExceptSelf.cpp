#include "ProductOfArrayExceptSelf.h"

using namespace std;

ProductOfArrayExceptSelf::ProductOfArrayExceptSelf() {}

vector<int> ProductOfArrayExceptSelf::productExceptSelf(vector<int>& nums) {
    size_t length = nums.size();
    
    if (length < 2) {
        return nums;
    }
    
    vector<int> answer(length);

    int leftProduct = 1;
    int rightProduct = 1;

    for (size_t i = 0; i < length; i++) {
        answer[i] = leftProduct;
        leftProduct *= nums[i];
    }

    for (int i = length - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return answer;
}