#include <iostream>
#include <vector>

#include "ClosestToZero.h"

using namespace std;

int main()
{
	ClosestToZero ctz;
	vector<int> nums = {10, -4, -2, 18451, 2, -2, 4, 8};

	cout << ctz.findClosestNumber(nums);

	return 0;
}
