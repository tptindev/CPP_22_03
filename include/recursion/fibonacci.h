#pragma once

int fibonacciN(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
    {
        return fibonacciN(n - 1) + fibonacciN(n - 2);
    }
}