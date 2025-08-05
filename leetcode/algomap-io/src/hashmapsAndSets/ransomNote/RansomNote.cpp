#include <iostream>
#include <map>

#include "RansomNote.hpp"

using namespace std;

RansomNote::RansomNote() {}

bool RansomNote::canConstruct(string ransomNote, string magazine) {
    if (ransomNote.empty() || magazine.empty()) {
        return false;
    }

    // Mapping the ransom notes
    auto ransomNoteMap = map<char, int>{};
    for (char note : ransomNote) {
        ransomNoteMap[note]++;
    }

    // Mapping the magazine
    auto magazineMap = map<char, int>{};
    for (char letter : magazine) {
        magazineMap[letter]++;
    }

    for (map<char,int>::iterator it = ransomNoteMap.begin(); it != ransomNoteMap.end(); ++it) {
        if (magazineMap.find(it->first) == magazineMap.end()|| magazineMap[it->first] < ransomNoteMap[it->first]) {
            return false;
        }
    }

    return true;
}