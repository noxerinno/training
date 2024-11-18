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

    map<string, int> defaultRomanNumbers = defaultRomanNumbers();
    map<string, int> exceptionsRomanNumbers = exceptionsRomanNumbers();
    int result = 0;

    // TODO: Iterate to find, remove from string and add value to result the "exception roman numbers"
    for (size_t i = 0; i < s.size(); i++) {
        
    }

    // TODO: Iterate to find, possibly remove from string and add value to result the "default roman numbers"
    for (size_t i = 0; i < s.size(); i++) {
        
    }

    return result;
}

map<string, int> RomanToInteger::defaultRomanNumbers() {
    map<string, int> romanNumbers;

    romanNumbers["I"] = 1;
    romanNumbers["V"] = 5;
    romanNumbers["X"] = 10;
    romanNumbers["L"] = 50;
    romanNumbers["C"] = 100;
    romanNumbers["D"] = 500;
    romanNumbers["M"] = 1000;

    return romanNumbers;
}

map<string, int> RomanToInteger::exceptionsRomanNumbers() {
    map<string, int> romanNumbers;

    romanNumbers["IV"] = 4;
    romanNumbers["IX"] = 9;
    romanNumbers["XL"] = 40;
    romanNumbers["XC"] = 90;
    romanNumbers["CD"] = 400;
    romanNumbers["CM"] = 900;

    return romanNumbers;
}
