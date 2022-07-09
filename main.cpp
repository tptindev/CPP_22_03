#include <iostream>
#include <ostream>
#include <math.h>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include "utils/utils.h"
#include "sorts/sorts.h"
#include "leetcode/leetcode.h"
#include "recursion/recursion.h"
#include "matrix/Matrix2D.h"

int main()
{
    Matrix2D matrix(2, 3);
    Matrix2D matrix2(3, 2);
    matrix.randomMatrix();
    matrix2.randomMatrix();
    matrix.printMatrix();
    matrix2.printMatrix();
    matrix = matrix * matrix2;
    matrix.printMatrix();
    return 0;
}
