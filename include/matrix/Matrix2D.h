#pragma once
#include <vector>
#include <ostream>
#include <iostream>
class Matrix2D
{
private:
public:
    std::vector<std::vector<int>> m_matrix;
    Matrix2D();
    Matrix2D(std::vector<std::vector<int>> p_matrix);
    Matrix2D &operator=(const Matrix2D &A);
    Matrix2D &operator+(const Matrix2D &A);
    Matrix2D &operator*(const Matrix2D &A);
    friend std::ostream &operator<<(std::ostream &output, const Matrix2D &matrix)
    {
        return output;
    }
};
