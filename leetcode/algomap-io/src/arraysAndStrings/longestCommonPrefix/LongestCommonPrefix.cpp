#include <algorithm>

#include "LongestCommonPrefix.hpp"

using namespace std;

LongestCommonPrefix::LongestCommonPrefix() {}

string LongestCommonPrefix::longestCommonPrefix(vector<string>& strs) {
    // Remove duplicates 
    strs.erase(unique(strs.begin(), strs.end()), strs.end());

    string longestPrefix = *strs.begin();
    
    for (string str : strs) {
        if (str.empty()) {return str;}
        
        string prefix = "";
        
        for (size_t i = 0; i < str.length(); i++) {
            if (str[i] != longestPrefix[i]) {break;}
            
            prefix += str[i];
        }
        
        if (prefix.length() < longestPrefix.length()) {longestPrefix = prefix;}
        
        if (longestPrefix.empty()) {break;}
    }

    return longestPrefix;
}