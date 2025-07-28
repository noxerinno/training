#include <iostream>

#include "RotateImage.hpp"

using namespace std;

RotateImage::RotateImage() {}

void RotateImage::rotate(vector<vector<int>>& matrix) {
    size_t matrixSize = matrix.size();

    if (matrixSize < 2) {return;}

    // for (size_t j = matrixSize; j >= 0; j--) {
    //     for (size_t i = 0; i < matrixSize; i++) {
    //         matrix[j][matrixSize-i] = matrix[i][j];
    //     }
    // }

    // Transpose 
    for (size_t i = 1; i < matrixSize; i++) {
        for (size_t j = 0 ; j < i; j++) {
            matrix[i][j] = matrix[i][j] + matrix[j][i];
            matrix[j][i] = matrix[i][j] - matrix[j][i];
            matrix[i][j] = matrix[i][j] - matrix[j][i];
        }
    }

    // Reflect horizontaly
    for (size_t i = 0; i < matrixSize; i++) {
        for (size_t j = 0; j < matrixSize/2; j++) {
            matrix[i][j] = matrix[i][j] + matrix[i][matrixSize-1-j];
            matrix[i][matrixSize-1-j] = matrix[i][j] - matrix[i][matrixSize-1-j];
            matrix[i][j] = matrix[i][j] - matrix[i][matrixSize-1-j];
        }
    }
}

void RotateImage::printMatrix(vector<vector<int>>& matrix) {
    size_t matrixSize = matrix.size();

    for (size_t i = 0; i < matrixSize; i++) {
        for (size_t j = 0; j < matrixSize; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}