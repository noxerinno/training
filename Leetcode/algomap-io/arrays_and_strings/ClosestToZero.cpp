#include "ClosestToZero.h"
#include <algorithm>
#include <cmath>

using namespace std;

ClosestToZero::ClosestToZero() { }

int ClosestToZero::findClosestNumber(vector<int>& nums)
{
	sort(nums.begin(), nums.end(), myCompare);
	return (abs(nums[0]));
}

bool ClosestToZero::myCompare(int i, int j)
{
	return (abs(i) < abs(j));
}
