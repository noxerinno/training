#ifndef SPIRALMATRIX_HPP
#define SPIRALMATRIX_HPP

#include <vector>

class SpiralMatrix
{
public:
    SpiralMatrix();
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix);
};

#endif  // SPIRALMATRIX_H