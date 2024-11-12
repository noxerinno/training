#include "ClosestToZero.h"
#include <algorithm>
#include <cmath>

using namespace std;

ClosestToZero::ClosestToZero() { }

int ClosestToZero::findClosestNumber(vector<int>& nums)
{
	// If nums is null or empty, return 0
	if(nums.empty())
	{
		return 0;
	}

	// If nums' size is 1, return the only element
	if(nums.size() == 1)
	{
		return nums[0];
	}

	// Otherwise we sort the vector in relative absolute values
	sort(nums.begin(), nums.end(), myCompare);

	// If the closest int to 0 found is negative, we check if there is an equal positive value
	if(nums[0] < 0 && find(nums.begin(), nums.end(), abs(nums[0])) != nums.end())
	{
		return (abs(nums[0]));
	}

	return (nums[0]);
}

bool ClosestToZero::myCompare(int i, int j)
{
	return (abs(i) < abs(j));
}
