#include <math.h>
#include <iostream>

#include "SpiralMatrix.hpp"

using namespace std;

SpiralMatrix::SpiralMatrix() {}

vector<int> SpiralMatrix::spiralOrder(vector<vector<int>>& matrix) {
    vector<int> spiraledMatrix;
    
    if (matrix.empty()) {
        return spiraledMatrix;
    }
    
    float linesCount = matrix.size();
    float columnCount = matrix[0].size();
    cout << "Line count : " << linesCount << " & Column count : " << columnCount << endl;
    
    // Outer to inner appraoch
    for (size_t i = 0; i < ceil(max(linesCount, columnCount)/2); i++) {
        cout << "============ TOUR n°" << i << '/' << ceil(max(linesCount, columnCount)/2) -1 << " ============" << endl << endl;
        // Adding top line
        if (i < linesCount) {
            cout << "TOP" << endl;
            for (size_t j = i; j < columnCount - i; j++) {
                cout << "i : " << i << " & j : " << j << endl;
                spiraledMatrix.push_back(matrix[i][j]);
            }
            cout << endl;
        }

        // Adding right side
        if (columnCount - (i+1) < columnCount) {
            cout << "RIGHT" << endl;
            for (size_t j = i+1; j < linesCount - (i+1); j++) {
                cout << "i : " << j << " & j : " << columnCount - (i+1) << endl;
                spiraledMatrix.push_back(matrix[j][columnCount - (i+1)]);
            }
            cout << endl;
        }

        // Adding bottom side
        if (0 <= linesCount - (i+1) && linesCount - (i+1) < linesCount && columnCount - i > 0 && i != floor(linesCount/2)) {
            cout << "BOTTOM" << endl;
            int minBound = i - 1;
            if (i == 0) {
                minBound = -1;
            }
            
            for (int j = columnCount - (i+1); j > minBound; j--) {
                cout << "i : " << linesCount - (i+1) << " & j : " << j << endl;
                spiraledMatrix.push_back(matrix[linesCount - (i+1)][j]);
            }
            cout << endl;
        }
        
        // Adding left side
        if (i < linesCount && linesCount > 1 && i != floor(columnCount/2)) {
            cout << "LEFT" << endl;
            for (size_t j = linesCount - (i+2); j > i; j--) {
                cout << "i : " << j << " & j : " << i << endl;
                spiraledMatrix.push_back(matrix[j][i]);
            }
            cout << endl;
        }

        if (spiraledMatrix.size() == linesCount*columnCount) {break;}
    }
        
    return spiraledMatrix;
}