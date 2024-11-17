#include <cstddef>
#include <iostream>
#include <string>

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

    // Iterate over the shortest word 
    if (word1.length() == word2.length() || word1.length() < word2.length()) {
        for (size_t i = 0; i < word1.length(); i++) {
            word1.insert((i*2+1), word2[i] + '\0');
        }
        return word1 + word2.substr(word1.length());
    }

    for (size_t i = 0; i < word2.length(); i++) {
        word1.insert((i*2+1), word2[i] + '\0');
    }

    return word1;
    
    

    // string result = "";
    //
    // // Iterate over the shortest word 
    // if (word1.length() == word2.length() || word1.length() < word2.length()) {
    //     for (size_t i = 0; i < word1.length(); i++) {
    //         result.append(word1[i]);
    //         result.append(word2[i]);
    //     }
    //     return result.append(word2.substr(word1.length()));
    // }
    //
    // for (size_t i = 0; i < word2.length(); i++) {
    //     result.append(word1[i]);
    //     result.append(word2[i]);
    // }
    // return result.append(word1.substr(word2.length()));
}

// string MergeStringsAlternately::merger(string word1, string word2) {
//     for (int i = 0; i < shortestString.length(); i++) {
//         longestString.insert((i*2)+1, shortestString[i]);
//     }
//     return wo
// }
