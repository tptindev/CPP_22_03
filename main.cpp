#include <iostream>
#include <ostream>
#include <math.h>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <thread>
#include <bits/stdc++.h>
#include <mutex>

#include "utils/utils.h"
#include "sorts/sorts.h"
#include "leetcode/leetcode.h"
#include "recursion/recursion.h"
#include "matrix/Matrix2D.h"

int main()
{
    // Use current time as seed for random generator
    srand((unsigned)time(0));

    // Matrix2D matrix(5, 5);
    // Matrix2D matrix2(5, 5);
    // matrix.randomMatrix();
    // matrix.printMatrix(1);
    // matrix2.randomMatrix();
    // matrix2.printMatrix(2);
    // matrix = matrix + matrix2;
    // matrix.printMatrix(3);

    Matrix2D matrix(5, 5);
    matrix.randomMatrix(false);
    matrix.printMatrix(1);
    matrix.sortMatrix();

    // std::vector<std::vector<char>> board = {
    //     {'a', 'j', 'b', 'c', 'f'},
    //     {'k', 'c', 'A', 'd', 'A'},
    //     {'A', 'b', 'g', 'u', 'i'},
    // };
    // std::cout << exist1(board, "Abcdef") << std::endl;
    return 0;
}
