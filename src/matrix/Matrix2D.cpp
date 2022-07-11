#include "matrix/Matrix2D.h"

Matrix2D::Matrix2D()
{
}

Matrix2D::Matrix2D(int p_Rows, int p_Cols)
    : m_Rows(p_Rows), m_Cols(p_Cols)
{
    m_matrix = new int[(m_Rows * m_Cols)];
}

Matrix2D::Matrix2D(int *p_matrix)
    : m_matrix(p_matrix)
{
}

int *Matrix2D::matrixZero(int p_Rows, int p_Cols)
{
    int *mt = new int[(p_Rows * p_Cols)];
    for (int i = 0; i < p_Rows * p_Cols; i++)
    {
        mt[i] = 0;
    }
    return mt;
}

int *Matrix2D::randomMatrix()
{

    for (int i = 0; i < m_Rows * m_Cols; i++)
    {
        m_matrix[i] = 1 + rand() % 10;
    }
    return m_matrix;
}

void Matrix2D::printMatrix(int p_K)
{
    std::cout << "---MATRIX---" << p_K << std::endl;
    for (int i = 0; i < m_Rows; i++)
    {
        for (int j = 0; j < m_Cols; j++)
        {
            std::cout << *(m_matrix + i * m_Cols + j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n";
}

Matrix2D &Matrix2D::operator=(const Matrix2D &A)
{
    m_matrix = A.m_matrix;
    return *this;
}

Matrix2D &Matrix2D::operator+(const Matrix2D &A)
{
    std::clock_t t;
    t = clock();
    std::thread *workers = new std::thread[m_Rows * m_Cols];
    for (int i = 0; i < m_Rows; i++)
    {
        for (int j = 0; j < m_Cols; j++)
        {
            workers[j] = std::thread(std::bind(&Matrix2D::f, this, i, j, A));
            workers[j].join();
        }
    }
    t = clock() - t;
    std::cout << "It took time " << ((float)t) / CLOCKS_PER_SEC << std::endl;
    return *this;
}

Matrix2D &Matrix2D::operator*(const Matrix2D &A)
{
    int *multi = matrixZero(m_Rows, A.m_Cols);

    for (int i = 0; i < m_Rows; ++i)
    {
        for (int j = 0; j < A.m_Cols; ++j)
        {
            for (int k = 0; k < m_Cols; ++k)
            {
                //  multi[i][j] += m_matrix[i][k] * A.m_matrix[k][j]
                *(multi + i * m_Cols + j) += *(m_matrix + i * m_Cols + k) * *(A.m_matrix + k * A.m_Cols + j);
            }
        }
        std::cout << "\n";
    }
    m_Cols = A.m_Cols;
    m_matrix = multi;
    return *this;
}