#include <iostream>
#include <string>
#include <vector>

//#include "ClosestToZero.h"
//#include "MergeStringsAlternately.h"
#include "mergeStringsAlternately/MergeStringsAlternately.h"

using namespace std;

int main()
{
	// CLOSEST TO ZERO
    /*ClosestToZero ctz;
	vector<int> nums = {10, -4, -2, 18451, 2, -2, 4, 8};

	cout << ctz.findClosestNumber(nums);
    */

    //MERGE STRING ALTERNATELY
    MergeStringsAlternately msa;

    string word1 = "wordone";
    string word2 = "wordrwo";

    cout << msa.mergeAlternately(word1, word2);

	return 0;
}
