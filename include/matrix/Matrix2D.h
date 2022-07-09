#pragma once
#include <vector>
#include <ostream>
#include <iostream>
#include <thread>
#include <time.h>
// template <typename T>
class Matrix2D
{
private:
    int *m_matrix;
    int m_Rows = 3;
    int m_Cols = 3;

public:
    Matrix2D();
    Matrix2D(int p_Rows, int p_Cols);
    Matrix2D(int *p_matrix);
    int *matrixZero(int p_Rows, int p_Cols);
    int *randomMatrix();
    void printMatrix();
    Matrix2D &operator=(const Matrix2D &A);
    Matrix2D &operator+(const Matrix2D &A);
    Matrix2D &operator*(const Matrix2D &A);
    friend std::ostream &operator<<(std::ostream &output, const Matrix2D &matrix)
    {
        return output;
    }
};
