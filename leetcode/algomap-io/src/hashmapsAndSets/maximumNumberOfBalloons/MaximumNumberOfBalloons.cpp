#include <algorithm>
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
    
    return min({balloonMap['b'], balloonMap['a'], balloonMap['l'] / 2, balloonMap['o'] / 2, balloonMap['n']});
}