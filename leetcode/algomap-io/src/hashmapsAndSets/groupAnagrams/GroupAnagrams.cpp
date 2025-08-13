#include "GroupAnagrams.hpp"

using namespace std;

GroupAnagrams::GroupAnagrams() {}

vector<vector<string>> GroupAnagrams::groupAnagrams(vector<string>& strs) {
    if (strs.size() < 2) {
        return {strs};
    }

    vector<string> emptyStrings;
    map<map<char, int>, vector<string>> anagramDescriptorMap;
    vector<vector<string>> result;

    for (string str : strs) {
        // Sorting empty strings
        if (str.empty()) {
            emptyStrings.push_back(str);
            continue;
        }

        map<char, int> anagramDescriptor;
        for (char ch : str) {
            anagramDescriptor[ch]++;
        }

        anagramDescriptorMap[anagramDescriptor].push_back(str);
    }

    if (!emptyStrings.empty()) {
        result.push_back(emptyStrings);
    }
    
    for (auto const& [key, val] : anagramDescriptorMap) {
        result.push_back(val);
    }

    return result;
}