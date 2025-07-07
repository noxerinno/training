#include <iostream>
#include <string>
#include <vector>

//#include "closestToZero/ClosestToZero.h"
//#include "mergeStringsAlternately/MergeStringsAlternately.h"
//#include "romanToInteger/RomanToInteger.h"
// #include "isSubsequence/IsSubsequence.h"
// #include "bestTimeToBuyAndSellStock/BestTimeToBuyAndSellStock.h"
#include "longestCommonPrefix/LongestCommonPrefix.h"

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
    /*IsSubsequence is;

    string s = "ab";
    string t = "baab";
    
    if (is.isSubsequence(s, t)) {
        cout << "Subsequence" << endl;
    } else {
        cout << "Not a subsequence" << endl;
    }*/


    //BEST TIME TO BUY AND SELL STOCK
    /*BestTimeToBuyAndSellStock bttboss;

    // vector<int> prices = {7,7,1,5,3,3,6,4,2,3};
    // vector<int> prices = {7,6,6,5,4,3,1,1,1,1,1};
    // vector<int> prices = {1,1,1,2,2,3,5,9};

    // bttboss.maxProfit(prices);
    cout << bttboss.maxProfit(prices) << endl;*/


    //LONGEST COMMON PREFIX
    LongestCommonPrefix lcp;

    vector<string> strs = {"testabc", "testcde", "testabc", "ggo"};
    string prefix = lcp.longestCommonPrefix(strs); 

    cout << "Longest common prefix : " << prefix;

	return 0;
}
