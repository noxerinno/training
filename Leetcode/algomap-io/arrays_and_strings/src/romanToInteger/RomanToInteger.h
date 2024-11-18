#ifndef ROMANTOINTEGER_H
#define ROMANTOINTEGER_H

#include <map>
#include <string>

class RomanToInteger {
public:
    RomanToInteger();
    int romanToInt(std::string s);

private:
    std::map<std::string, int> defaultRomanNumbers();
    std::map<std::string, int> exceptionsRomanNumbers();
protected:
};

#endif // !ROMANTOINT_H
