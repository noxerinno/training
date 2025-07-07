#ifndef MERGESTRINGSALTERNATELY_H
#define MERGESTRINGSALTERNATELY_H

#include <cstddef>
#include <string>

class MergeStringsAlternately {
public:
    MergeStringsAlternately();
    std::string mergeAlternately(std::string word1, std::string word2);

private:
    std::string merger(std::string word1, std::string word2, size_t smallestLength);

protected:
};

#endif // !MERGESTRINGSALTERNATELY_H
