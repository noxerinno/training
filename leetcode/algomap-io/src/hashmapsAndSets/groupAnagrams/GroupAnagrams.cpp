#include <algorithm>
#include <map>
#include <unordered_map>

#include "GroupAnagrams.hpp"

using namespace std;

GroupAnagrams::GroupAnagrams() {}

// vector<vector<string>> GroupAnagrams::groupAnagrams(vector<string>& strs) {
//     if (strs.size() < 2) {
//         return {strs};
//     }

//     vector<string> emptyStrings;
//     map<map<char, int>, vector<string>> anagramDescriptorMap;
//     vector<vector<string>> result;

//     for (string str : strs) {
//         // Sorting empty strings
//         if (str.empty()) {
//             emptyStrings.push_back(str);
//             continue;
//         }

//         map<char, int> anagramDescriptor;
//         for (char ch : str) {
//             anagramDescriptor[ch]++;
//         }

//         anagramDescriptorMap[anagramDescriptor].push_back(str);
//     }

//     if (!emptyStrings.empty()) {
//         result.push_back(emptyStrings);
//     }

//     for (const auto& [key, val] : anagramDescriptorMap) {
//         result.push_back(val);
//     }

//     return result;
// }


vector<vector<string>> GroupAnagrams::groupAnagrams(vector<string>& strs) {
    if (strs.size() < 2) {
        return {strs};
    }

    unordered_map<string, vector<string>> anagramDict;
    vector<vector<string>> result;

    for (const string& str : strs) {
        string key = str;
        sort(key.begin(), key.end());
        anagramDict[key].push_back(str);
    }

    for (const auto& [key, val] : anagramDict) {
        result.push_back(val);
    }

    return result;
}