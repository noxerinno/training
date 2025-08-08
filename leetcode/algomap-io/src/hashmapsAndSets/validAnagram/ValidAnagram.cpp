#include <unordered_map>
#include <vector>

#include "ValidAnagram.hpp"

using namespace std;

ValidAnagram::ValidAnagram() {}

bool ValidAnagram::isAnagram(string s, string t) {
    // If the strings are not the same length, they can't be anagrams
    if (s.length() != t.length()) {
        return false;
    }
    
    // If both of them are empty or they are the same word it's an anagram
    if (s.empty() || t.empty() || s == t) {
        return true;
    }

    unordered_map<char, int> sMap, tMap;

    for (char letter : s) {
        sMap[letter]++;
    }

    for (char letter : t) {
        tMap[letter]++;
    }

    return sMap == tMap;
}

// bool ValidAnagram::isAnagram(string s, string t) {
//     // If the strings are not the same length, they can't be anagrams
//     if (s.length() != t.length()) {
//         return false;
//     }
    
//     // If both of them are empty or they are the same word it's an anagram
//     if (s.empty() || t.empty() || s == t) {
//         return true;
//     }

//     vector<int> frequency(26);

//     for (const char& ch : s) {
//         frequency[ch - 'a']++;
//     }

//     for (const char& ch : t) {
//         frequency[ch - 'a']--;
//     }

//     for (const int& value : frequency) {
//         if (value != 0) {
//             return false;
//         }
//     }

//     return true;
// }