#include <cstddef>
#include <iostream>
#include <string>
#include <typeinfo>

#include "MergeStringsAlternately.h"

using namespace std;

MergeStringsAlternately::MergeStringsAlternately() {};

string MergeStringsAlternately::mergeAlternately(string word1, string word2) {
    // If both words are empty, return an empty string
    if (word1.empty() && word2.empty()) {return "";}

    // If word1 is empty, return word2
    if (word1.empty()) {return word2;}

    // If word2 is empty, return word1
    if (word2.empty()) {return word1;}

    // // Iterate over the shortest word 
    // if (word1.length() == word2.length() || word1.length() < word2.length()) {
    //     for (size_t i = 0; i < word1.length() - 1; i++) {
    //         word1.insert((i*2+1), word2, i, 1);
    //     }
    //     return word1 + word2.substr(word1.length());
    // }
    //
    // for (size_t i = 0; i < word2.length() - 1; i++) {
    //     word1.insert((i*2+1), word2, i, 1);
    // }
    //
    // return word1;
    
    

    // Iterate over the shortest word 
    if (word1.length() < word2.length()) {
        return merger(word1, word2, word1.length()).append(word2.substr(word1.length()));
    }

    if (word2.length() < word1.length()) {
        return merger(word1, word2, word2.length()).append(word1.substr(word2.length()));
    }

    return merger(word1, word2, word1.length());
}

string MergeStringsAlternately::merger(string word1, string word2, size_t smallestLength) {
    string result = "";

    for (size_t i = 0; i < smallestLength; i++) {
        result.append(1, word1[i]);
        result.append(1, word2[i]);
    }

    return result;
}
