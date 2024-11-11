#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

class ClosestToZero {
public:
  int findClosestNumber(vector<int> &nums) {
    sort(nums.begin(), nums.end(), myCompare);
    return (nums[-1]);
  }

private:
  bool myCompare(int i, int j) { return (abs(i) < abs(j)); }
};
