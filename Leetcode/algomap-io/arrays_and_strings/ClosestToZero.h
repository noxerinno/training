#ifndef CLOSESTTOZERO_H
#define CLOSESTTOZERO_H

#include <vector>

class ClosestToZero
{
public:
	ClosestToZero();
	int findClosestNumber(std::vector<int>& nums);

private:
	static bool myCompare(int i, int j);

protected:
};

#endif
