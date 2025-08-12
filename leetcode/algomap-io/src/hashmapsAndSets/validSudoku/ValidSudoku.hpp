#ifndef VALIDSUDOKU_HPP
#define VALIDSUDOKU_HPP

#include <unordered_set>
#include <vector>

#define GRID_SIZE 9

class ValidSudoku
{
public:
    ValidSudoku();
    bool isValidSudoku(std::vector<std::vector<char>>& board);
    void displayBoard(std::vector<std::vector<char>>& board);
private:
    bool isValidCluster(const int i, const int j, const char cell, std::vector<std::unordered_set<char>>& clusterArray);
};

#endif  // VALIDSUDOKU_HPP