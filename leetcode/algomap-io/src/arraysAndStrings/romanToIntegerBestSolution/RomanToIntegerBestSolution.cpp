#include <cstddef>
#include <map>
#include <string>

#include "RomanToIntegerBestSolution.hpp"

using namespace std;

RomanToInteger::RomanToInteger() {}

int RomanToInteger::romanToInt(string s) {
    // If s is empty, we return 0
    if (s.empty()) {
        return 0;
    }

    map<char, int> defaultRomanNumbers;
    initializeDefaultRomanNumbers(&defaultRomanNumbers);

    map<string, int> specialRomanNumbers;
    initializeSpecialRomanNumbers(&specialRomanNumbers);

    int result = 0;

    // Iterate one time and check if the string composed of s[i] and s[i+1] is an "special"
    // roman number. Take care of the case where s[i] == '\0'
    // If so, add corresponding value and do not consider s[i+1]
    // Else, just add s[i] regular value
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] != '\0' && (specialRomanNumbers.find(s.substr(i, 2)) != specialRomanNumbers.end())) {
            result += specialRomanNumbers.find(s.substr(i, 2))->second;
            i++;
            continue;
         }

        result += defaultRomanNumbers.find(s[i])->second;
    }

    return result;
}

void RomanToInteger::initializeDefaultRomanNumbers(map<char, int>* defaultRomanNumbers) {
    *defaultRomanNumbers = {{'I', 1},
                            {'V', 5},
                            {'X', 10},
                            {'L', 50},
                            {'C', 100},
                            {'D', 500},
                            {'M', 1000}};
}

void RomanToInteger::initializeSpecialRomanNumbers(map<string, int>* specialRomanNumbers) {
    *specialRomanNumbers = {{"IV", 4},
                            {"IX", 9},
                            {"XL", 40},
                            {"XC", 90},
                            {"CD", 400},
                            {"CM", 900}};
}
