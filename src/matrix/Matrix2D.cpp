#include "matrix/Matrix2D.h"

Matrix2D::Matrix2D()
{
}

Matrix2D::Matrix2D(std::vector<std::vector<int>> p_matrix)
    : m_matrix(p_matrix)
{
}
Matrix2D &Matrix2D::operator=(const Matrix2D &A)
{
    m_matrix = A.m_matrix;
    return *this;
}

Matrix2D &Matrix2D::operator+(const Matrix2D &A)
{
    for (int i = 0; i < m_matrix.size(); i++)
    {
        for (int j = 0; j < m_matrix[i].size(); j++)
        {
            m_matrix[i][j] = m_matrix[i][j] + A.m_matrix[i][j];
        }
    }
    return *this;
}
