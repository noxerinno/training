#include <iostream>
#include <string>
#include <vector>

//#include "closestToZero/ClosestToZero.h"
//#include "mergeStringsAlternately/MergeStringsAlternately.h"
//#include "romanToInteger/RomanToInteger.h"
#include "isSubsequence/IsSubsequence.h"

using namespace std;

int main()
{
	// CLOSEST TO ZERO
    /*ClosestToZero ctz;
	vector<int> nums = {10, -4, -2, 18451, 2, -2, 4, 8};

	cout << ctz.findClosestNumber(nums);*/


    //MERGE STRING ALTERNATELY
    /*MergeStringsAlternately msa;

    string word1 = "wordone";
    string word2 = "wordtwoSUITE";

    cout << msa.mergeAlternately(word1, word2);*/
    

    //ROMAN TO INTEGER
    /*RomanToInteger rti;
    
    string romanNumber = "MCMXCIV";

    cout << rti.romanToInt(romanNumber);:*/

    
    //IS SUBSEQUENCE
    IsSubsequence is;

    string s = "ab";
    string t = "baab";
    
    if (is.isSubsequence(s, t)) {
        cout << "Subsequence" << endl;
    } else {
        cout << "Not a subsequence" << endl;
    }

	return 0;
}
