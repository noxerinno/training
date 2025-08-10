#include <algorithm>
#include <iostream>
#include <unordered_map>

#include "MaximumNumberOfBalloons.hpp"

using namespace std;

MaximumNumberOfBalloons::MaximumNumberOfBalloons() {};

int MaximumNumberOfBalloons::maxNumberOfBallons(string text) {
    if (text.length() < 7) {
        return 0;
    }

    string balloon = "balloon";
    unordered_map<char, int> balloonMap = {
        {'b', 0},
        {'a', 0},
        {'l', 0},
        {'o', 0},
        {'n', 0}
    };

    for (char ch : text) {
        if (balloon.find(ch) != string::npos) {
            balloonMap[ch]++;
        }
    }

    balloonMap['l'] = balloonMap['l']/2;
    balloonMap['o'] = balloonMap['o']/2;

    // DEBUG
    // TODO : DON'T FORGET TO DELETE & IOSTREAM INCLUDE
    for (auto [key, value] : balloonMap) {
        cout << "Key : " << key << " - Value : " << value << endl;
    }

    auto minIt = min_element(
        balloonMap.begin(),
        balloonMap.end(),
        [](const auto& a, const auto& b) {
            return a.second < b.second;
        });

    if (minIt != balloonMap.end()) {
        return minIt->second;
    }

    return 0;
}