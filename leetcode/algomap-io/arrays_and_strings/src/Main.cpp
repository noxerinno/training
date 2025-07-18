#include <iostream>
#include <string>
#include <vector>

//#include "closestToZero/ClosestToZero.hpp"
//#include "mergeStringsAlternately/MergeStringsAlternately.hpp"
//#include "romanToInteger/RomanToInteger.hpp"
// #include "isSubsequence/IsSubsequence.hpp"
// #include "bestTimeToBuyAndSellStock/BestTimeToBuyAndSellStock.hpp"
// #include "longestCommonPrefix/LongestCommonPrefix.hpp"
// #include "summaryRanges/SummaryRanges.hpp"
// #include "productOfArrayExceptSelf/ProductOfArrayExceptSelf.hpp"
// #include "mergeIntervals/MergeIntervals.hpp"
#include "spiralMatrix/SpiralMatrix.hpp"

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
    /*LongestCommonPrefix lcp;

    vector<string> strs = {"testabc", "testcde", "testabc", "ggo"};
    string prefix = lcp.longestCommonPrefix(strs); 

    cout << "Longest common prefix : " << prefix;*/


    //SUMMARY RANGES
    /*SummaryRanges sr;

    // vector<int> nums = {};
    // vector<int> nums = {5};
    // vector<int> nums = {1,2,3,4,6,8,9};
    vector<int> nums = {1,2,3,4,6,8};

    vector<string> summaryRanges = sr.summaryRanges(nums);

    for (string range : summaryRanges) {
        cout << "\"" << range << "\", ";
    }*/


    //PRODUCT OF ARRAY EXCEPT SELF
    /*ProductOfArrayExceptSelf poaes;

    // vector<int> nums;
    // vector<int> nums = {4};
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = poaes.productExceptSelf(nums);

    for (int value: result) {
        cout << value << ' ';
    }*/


    // MERGE INTERVALS
    /*MergeIntervals mi;

    // vector<vector<int>> intervals;
    // vector<vector<int>> intervals = {{5,10}};
    // vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
    vector<vector<int>> intervals = {{1,3}, {2,5}, {11,13}, {10,15}, {20,25}, {21, 24}, {50,55}, {55,100}, {1000, 10001}};

    vector<vector<int>> mergedIntervals = mi.merge(intervals);

    for (vector<int> interval : mergedIntervals) {
        if (!interval.empty()) {
            cout << '[' << interval[0] << ',' << interval[1] << "] ";
        } else {
            cout << "empty ";
        }
    }*/


    // SPIRAL MATRIX
    SpiralMatrix sm;

    // vector<vector<int>> matrix;
    // vector<vector<int>> matrix = {{1,2,3}};
    // vector<vector<int>> matrix = {{1},{2},{3}};
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // vector<vector<int>> matrix = {{2,5,8},{4,0,-1}};

    vector<int> spiralMatrix = sm.spiralOrder(matrix);

    for (int num : spiralMatrix) {
        cout << num << ' ';
    }

	return 0;
}
