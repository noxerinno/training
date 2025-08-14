#include <iostream>
#include <string>
#include <vector>

// CHAPTER 1 : Arrays and strings

//#include "arraysAndStrings/closestToZero/ClosestToZero.hpp"
//#include "arraysAndStrings/mergeStringsAlternately/MergeStringsAlternately.hpp"
//#include "arraysAndStrings/romanToInteger/RomanToInteger.hpp"
// #include "arraysAndStrings/isSubsequence/IsSubsequence.hpp"
// #include "arraysAndStrings/bestTimeToBuyAndSellStock/BestTimeToBuyAndSellStock.hpp"
// #include "arraysAndStrings/longestCommonPrefix/LongestCommonPrefix.hpp"
// #include "arraysAndStrings/summaryRanges/SummaryRanges.hpp"
// #include "arraysAndStrings/productOfArrayExceptSelf/ProductOfArrayExceptSelf.hpp"
// #include "arraysAndStrings/mergeIntervals/MergeIntervals.hpp"
// #include "arraysAndStrings/spiralMatrix/SpiralMatrix.hpp"
// #include "arraysAndStrings/rotateImage/RotateImage.hpp"


// CHAPTER 2 : Hashmaps and sets

// #include "hashmapsAndSets/jewelsAndStones/JewelsAndStones.hpp"
// #include "hashmapsAndSets/containsDuplicate/ContainsDuplicate.hpp"
// #include "hashmapsAndSets/ransomNote/RansomNote.hpp"
// #include "hashmapsAndSets/validAnagram/ValidAnagram.hpp"
// #include "hashmapsAndSets/maximumNumberOfBalloons/MaximumNumberOfBalloons.hpp"
// #include "hashmapsAndSets/twoSum/TwoSum.hpp"
// #include "hashmapsAndSets/validSudoku/ValidSudoku.hpp"
// #include "hashmapsAndSets/groupAnagrams/GroupAnagrams.hpp"
// #include "hashmapsAndSets/majorityElement/MajorityElement.hpp"
#include "hashmapsAndSets/longestConsecutiveSequence/LongestConsecutiveSequence.hpp"

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
    /*SpiralMatrix sm;

    // vector<vector<int>> matrix;
    // vector<vector<int>> matrix = {{1,2,3}};
    // vector<vector<int>> matrix = {{1},{2},{3}};
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // vector<vector<int>> matrix = {{2,5,8},{4,0,-1}};

    vector<int> spiralMatrix = sm.spiralOrder(matrix);

    for (int num : spiralMatrix) {
        cout << num << ' ';
    }*/


    // ROTATE IMAGE
    /*RotateImage ri;

    // vector<vector<int>> matrix;
    // vector<vector<int>> matrix = {{1,2},{3,4}};
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

    ri.printMatrix(matrix);
    ri.rotate(matrix);
    ri.printMatrix(matrix);*/



    // JEWELS AND STONES
    /*JewelsAndStones jas;

    cout << jas.numJewelsAndStones("aA", "aAAbbbb") << endl;*/

    // CONTAINS DUPLICATES
    /*ContainsDuplicate cd;

    // vector<int> nums;
    // vector<int> nums = {1, 3, 4, 513};
    vector<int> nums = {1, 1, 2, 5};

    if (cd.containsDuplicate(nums)) {
        cout << "Contains duplicates" << endl;
    } else {
        cout << "No duplicates" << endl;
    }*/

    // RANSOM NOTE
    /*RansomNote rn;

    string ransomNote = "aa";
    string magazine = "aab";

    if (rn.canConstruct(ransomNote, magazine)) {
        cout << "Can construct" << endl;
    } else {
        cout << "Cannot construct" << endl;
    }*/


    // VALID ANAGRAM
    /*string a = "test";
    string b = "test";

    if (a == b) {
        cout << "Same string";
    } else {
        cout << "Nope, not the same";
    }*/

    /*ValidAnagram va;

    string s = "anagram";
    string t = "nagaram";

    if (va.isAnagram(s, t)) {
        cout << "It's an anagram" << endl;
    } else {
        cout << "Nope, not an anagram" << endl;
    }*/


    // MAXIMIM NUMBER OF BALLOONS
    /*char ch = 'a';
    string text = "test";
    
    if (text.find(ch) != string::npos) {
        cout << "Letter '" << ch << "' in '" << text << "'" << endl;
    }

    cout << 7/2;*/

    /*MaximumNumberOfBalloons mnob;

    // string text;
    // string text = "nlaebolko";
    // string text = "loonbalxballpoon";
    // string text = "leetcode";
    string text = "nllbblooon";

    cout << mnob.maxNumberOfBallons(text) << endl;*/


    // TWO SUM
    /*TwoSum ts;

    // vector<int> nums = {2,7,11,15};
    // int target = 9;

    // vector<int> nums = {3,2,4};
    // int target = 6;

    // vector<int> nums = {3,3};
    // int target = 6;

    // vector<int> nums = {-1,-2,-3,-4,-5};
    // int target = -8;

    // vector<int> nums = {3,2,4};
    // int target = 6;

    // vector<int> nums = {0,4,3,0};
    // int target = 0;

    vector<int> nums = {-3,4,3,90};
    int target = 0;

    vector<int> result = ts.twoSum(nums, target);

    cout << '[' << result[0] << ',' << result[1] << ']' << endl;*/


    // VALID SUDOKU
    /*ValidSudoku vs;

    // vector<vector<char>> grid = {{'5','3','.','.','7','.','.','.','.'},
    //                             {'6','.','.','1','9','5','.','.','.'},
    //                             {'.','9','8','.','.','.','.','6','.'},
    //                             {'8','.','.','.','6','.','.','.','3'},
    //                             {'4','.','.','8','.','3','.','.','1'},
    //                             {'7','.','.','.','2','.','.','.','6'},
    //                             {'.','6','.','.','.','.','2','8','.'},
    //                             {'.','.','.','4','1','9','.','.','5'},
    //                             {'.','.','.','.','8','.','.','7','9'}};

    vector<vector<char>> grid = {{'8','3','.','.','7','.','.','.','.'},
                                {'6','.','.','1','9','5','.','.','.'},
                                {'.','9','8','.','.','.','.','6','.'},
                                {'8','.','.','.','6','.','.','.','3'},
                                {'4','.','.','8','.','3','.','.','1'},
                                {'7','.','.','.','2','.','.','.','6'},
                                {'.','6','.','.','.','.','2','8','.'},
                                {'.','.','.','4','1','9','.','.','5'},
                                {'.','.','.','.','8','.','.','7','9'}};

    vs.displayBoard(grid);

    if (vs.isValidSudoku(grid)) {
        cout << endl << endl << "Valid grid" << endl;
    } else {
        cout << endl << endl << "Invalid grid" << endl;
    }*/


    // GROUP ANAGRAMS
    /*GroupAnagrams ga;

    // vector<string> strs = {""};
    // vector<string> strs = {"a"};
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> result = ga.groupAnagrams(strs);

    for (size_t i = 0; i < result.size(); ++i) {
        cout << "Group n°" << i << '{';

        for (string elem : result[i]) {
            cout << '"' << elem << "\", ";
        }

        cout << '}' << endl << endl;
    }*/


    // MAJORITY ELEMENT
    /*MajorityElement me;

    // vector<int> nums = {3,2,3};
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << me.majorityElement(nums);*/


    // LONGEST CONSECUTIVE SEQUENCE
    LongestConsecutiveSequence lcs;

    vector<int> nums = {100,4,200,1,3,2};
    // vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
    // vector<int> nums = {1,0,1,2};

    cout << lcs.longestConsecutive(nums);

	return 0;
}
