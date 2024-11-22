#ifndef ROMANTOINTEGER_H
#define ROMANTOINTEGER_H

#include <map>
#include <string>

class RomanToInteger {
public:
    RomanToInteger();
    int romanToInt(std::string s);

private:
    // std::map<std::string, int> defaultRomanNumbers();
    //std::map<std::string, int> specialRomanNumbers();
    void initializeDefaultRomanNumbers(std::map<char, int>* defaultRomanNumbers);
    void initializeSpecialRomanNumbers(std::map<std::string, int>* specialRomanNumbers);

protected:
};

#endif // !ROMANTOINT_H
