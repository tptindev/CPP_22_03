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
    // std::vector<std::vector<int>> a = {
    //     {2, 3, 1},
    //     {5, 2, 8}};
    // std::vector<std::vector<int>> b = {
    //     {21, 23, 3},
    //     {1, 5, 2}};
    // Matrix2D matrix(a);
    // Matrix2D matrix1(b);
    // matrix = matrix + matrix1;
    // for (int i = 0; i < matrix.m_matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix.m_matrix[i].size(); j++)
    //     {
    //         std::cout << matrix.m_matrix[i][j] << "\t";
    //     }
    //     std::cout << "\n";
    // }

    std::string s = "";
    while (true)
    {
        std::cout << "Enter string: ";
        std::cin >> s;
        std::cout << longest_palindromic_substring(s);
        std::cout << "\n";
    }

    return 0;
}
