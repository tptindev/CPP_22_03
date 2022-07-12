#pragma once
#include <vector>
#include <ostream>
#include <iostream>
#include <time.h>
#include <thread>
#include <functional>
class Matrix2D
{
private:
    int *m_matrix;
    int m_Rows = 3;
    int m_Cols = 3;
    void f(int i, int j, Matrix2D A)
    {
        for (; i < j; i++)
        {
            m_matrix[i] = m_matrix[i] + A.m_matrix[i];
        }
    };

public:
    Matrix2D();
    Matrix2D(int p_Rows, int p_Cols);
    Matrix2D(int *p_matrix);
    int *matrixZero(int p_Rows, int p_Cols);
    int *randomMatrix();
    void printMatrix(int p_K);
    Matrix2D &operator=(const Matrix2D &A);
    Matrix2D &operator+(const Matrix2D &A);
    Matrix2D &operator*(const Matrix2D &A);
    friend std::ostream &operator<<(std::ostream &output, const Matrix2D &matrix)
    {
        return output;
    }
};
