#ifndef CLOSESTTOZERO_HPP
#define CLOSESTTOZERO_HPP

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
