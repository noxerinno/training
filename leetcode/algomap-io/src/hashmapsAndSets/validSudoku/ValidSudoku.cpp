#include <iostream>

#include "ValidSudoku.hpp"

using namespace std;

ValidSudoku::ValidSudoku() {}

bool ValidSudoku::isValidSudoku(vector<vector<char>>& board) {
    vector<unordered_set<char>> columnsArray(GRID_SIZE);
    vector<unordered_set<char>> clusterArray(GRID_SIZE);

    for (size_t i = 0; i < GRID_SIZE; i++) {
        unordered_set<char> rowSet;

        for (size_t j = 0; j < GRID_SIZE; j++) {
            char cell = board[i][j];

            if (cell == '.') {
                continue;
            }
            
            // Checking row validity
            if (rowSet.find(cell) != rowSet.end()) {return false;}
            rowSet.insert(cell);

            // Checking column validity
            if (columnsArray[j].find(cell) != columnsArray[j].end()) {return false;}
            columnsArray[j].insert(cell);

            // Checking "cluster" validity
            if (!isValidCluster(i, j, cell, clusterArray)) {return false;}
        }
    }

    return true;
}

bool ValidSudoku::isValidCluster(const int i, const int j, const char cell, vector<unordered_set<char>>& clusterArray) {
    if (i < 3) {
        if (j < 3) {
            if (clusterArray[0].find(cell) != clusterArray[0].end()) {return false;}
            clusterArray[0].insert(cell);
            return true;
        }

        if (j < 6) {
            if (clusterArray[1].find(cell) != clusterArray[1].end()) {return false;}
            clusterArray[1].insert(cell);
            return true;
        }

        if (clusterArray[2].find(cell) != clusterArray[2].end()) {return false;}
        clusterArray[2].insert(cell);
        return true;
    }

    if (i < 6) {
        if (j < 3) {
            if (clusterArray[3].find(cell) != clusterArray[3].end()) {return false;}
            clusterArray[3].insert(cell);
            return true;
        }

        if (j < 6) {
            if (clusterArray[4].find(cell) != clusterArray[4].end()) {return false;}
            clusterArray[4].insert(cell);
            return true;
        }

        if (clusterArray[5].find(cell) != clusterArray[5].end()) {return false;}
        clusterArray[5].insert(cell);
        return true;
    }

    if (j < 3) {
        if (clusterArray[6].find(cell) != clusterArray[6].end()) {return false;}
        clusterArray[6].insert(cell);
        return true;
    }

    if (j < 6) {
        if (clusterArray[7].find(cell) != clusterArray[7].end()) {return false;}
        clusterArray[7].insert(cell);
        return true;
    }

    if (clusterArray[8].find(cell) != clusterArray[8].end()) {return false;}
    clusterArray[8].insert(cell);
    return true;
}

void ValidSudoku::displayBoard(vector<vector<char>>& board) {
    int rowCounter = 1;

    for (vector<char> row : board) {
        int cellCounter = 1; 
        
        for (char cell : row) {
            cout << ' ' << cell << " |";

            if (cellCounter == GRID_SIZE) {
                break;
            } else if (cellCounter % 3 == 0) {
                cout << '|';
            }
            
            cellCounter++;
        }
        
        if (rowCounter == GRID_SIZE) {
            break;
        } else if (rowCounter % 3 == 0) {
            cout << endl << "======================================" << endl;
        } else {
            cout << endl << "--------------------------------------" << endl;
        }

        rowCounter++;
    }
}