#include <iostream>
#include <ostream>
#include <math.h>
#include <map>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include "utils/utils.h"
#include "sorts/sorts.h"
#include "leetcode/leetcode.h"
#include "matrix/Matrix2D.h"

int main()
{
    std::vector<std::vector<int>> a = {{2, 3, 1}, {5, 2, 8}};
    std::vector<std::vector<int>> b = {{21, 23, 3}, {1, 5, 2}};
    Matrix2D matrix(a);
    Matrix2D matrix2(a);
    Matrix2D matrix3(b);
    matrix = (matrix2 + matrix3);
    std::cout << matrix.m_matrix.size() << std::endl;

    return 0;
}
