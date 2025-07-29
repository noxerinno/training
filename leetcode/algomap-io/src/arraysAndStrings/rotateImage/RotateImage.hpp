#ifndef ROTATEIMAGE_HPP
#define ROTATEIMAGE_HPP

#include <vector>

class RotateImage
{
public:
    RotateImage(/* args */);
    void rotate(std::vector<std::vector<int>>& matrix);
    void printMatrix(std::vector<std::vector<int>>& matrix);
};

#endif // ROTATEIMAGE_HPP