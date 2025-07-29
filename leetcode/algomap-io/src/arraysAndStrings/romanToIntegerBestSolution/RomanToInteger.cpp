#include <cstddef>
#include <unordered_map>
#include <string>

#include "RomanToIntegerBestSolution.hpp"

using namespace std;
    
RomanToInteger::RomanToInteger() {}

int RomanToInteger::romanToInt(string s) {
    // If s is empty, we return 0
    if (s.empty()) {
        return 0;
    }

    unordered_map<char, int> romanNumbers;
    
    romanNumbers['I'] = 1;
    romanNumbers['V'] = 5;
    romanNumbers['X'] = 10;
    romanNumbers['L'] = 50;
    romanNumbers['C'] = 100;
    romanNumbers['D'] = 500;
    romanNumbers['M'] = 1000;

    int result = 0;

    // Iterate one time and check if the string composed of s[i] and s[i+1] is an "special"
    // roman number. Take care of the case where s[i] == '\0'
    // If so, add corresponding value and do not consider s[i+1]
    // Else, just add s[i] regular value
    for (size_t i = 0; i < s.size(); i++) {
        if(romanNumbers[s[i]] < romanNumbers[s[i+1]]) {
            result -= romanNumbers[s[i]];
        } else {
            result += romanNumbers[s[i]];
        }
    }

    return result;
}

