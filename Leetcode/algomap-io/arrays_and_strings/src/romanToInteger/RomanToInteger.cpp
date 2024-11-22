#include <cstddef>
#include <map>
#include <string>

#include "RomanToInteger.h"

using namespace std;

RomanToInteger::RomanToInteger() {}

int RomanToInteger::romanToInt(string s) {
    // If s is empty, we return 0
    if (s.empty()) {
        return 0;
    }

    // map<string, int> defaultRomanNumbers = defaultRomanNumbers();
    // map<string, int> specialRomanNumbers = specialRomanNumbers();
    
    map<char, int> defaultRomanNumbers;
    initializeDefaultRomanNumbers(&defaultRomanNumbers);

    map<string, int> specialRomanNumbers;
    initializeSpecialRomanNumbers(&specialRomanNumbers);

    int result = 0;

    // // TODO: Iterate to find, remove from string and add value to result the "exception roman numbers"
    // for (size_t i = 0; i < s.size(); i++) {
    //     
    // }
    //
    // // TODO: Iterate to find, possibly remove from string and add value to result the "default roman numbers"
    // for (size_t i = 0; i < s.size(); i++) {
    //     
    // }

    // Iterate one time and check if the string composed of s[i] and s[i+1] is an "special"
    // roman number. Take care of the case where s[i] == '\0'
    // If so, add corresponding value and do not consider s[i+1]
    // Else, just add s[i] regular value
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] != '\0' && specialRomanNumbers.find(s[i] + s[i+1])) {
            result += specialRomanNumbers.find(s[i] + s[i+1]);
            i++;
            break;
        }

        result += defaultRomanNumbers.find(s[i])[1];
    }

    return result;
}

// map<string, int> RomanToInteger::defaultRomanNumbers() {
//     map<string, int> romanNumbers;
//
//     romanNumbers["I"] = 1;
//     romanNumbers["V"] = 5;
//     romanNumbers["X"] = 10;
//     romanNumbers["L"] = 50;
//     romanNumbers["C"] = 100;
//     romanNumbers["D"] = 500;
//     romanNumbers["M"] = 1000;
//
//     return romanNumbers;
// }
//
// map<string, int> RomanToInteger::specialRomanNumbers() {
//     map<string, int> romanNumbers;
//
//     romanNumbers["IV"] = 4;
//     romanNumbers["IX"] = 9;
//     romanNumbers["XL"] = 40;
//     romanNumbers["XC"] = 90;
//     romanNumbers["CD"] = 400;
//     romanNumbers["CM"] = 900;
//
//     return romanNumbers;
// 
// }

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
