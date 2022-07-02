#pragma once
#include<vector>
#include<ostream>
class Matrix2D
{
private:


public:
    std::vector<std::vector<int>> m_matrix;
    Matrix2D(/* args */);
    Matrix2D (std::vector<std::vector<int>> p_matrix);
    Matrix2D& operator=(Matrix2D &A);
    Matrix2D& operator+(Matrix2D &A);
    friend std::ostream &operator<<(std::ostream &output, const Matrix2D &matrix)
    {
        return output;
    }
};


