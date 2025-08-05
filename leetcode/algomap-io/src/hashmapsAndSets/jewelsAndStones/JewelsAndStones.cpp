#include <iostream>

#include "JewelsAndStones.hpp"

using namespace std;

JewelsAndStones::JewelsAndStones() {}

int JewelsAndStones::numJewelsAndStones(string jewels, string stones) {
    int numOfJewels = 0;

    if (stones.empty()) {
        return numOfJewels;
    }

    // Mapping the stones
    auto stonesMap = map<char, int>{};
    for (char stone : stones) {
        stonesMap[stone]++;
    }

    // printStonesMap(stonesMap);
    
    // Counting jewels
    for (char jewel : jewels) {
        numOfJewels += stonesMap[jewel];
    }
    
    return numOfJewels;
}

void JewelsAndStones::printStonesMap(map<char,int> stonesMap) {
    cout << endl;
    
    for (map<char,int>::iterator it = stonesMap.begin(); it != stonesMap.end(); ++it) {
        cout << '"' << it->first << "\" : " << it->second << endl;
    }

    cout << endl;
}