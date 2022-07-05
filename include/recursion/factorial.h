#pragma once

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
    {
        // n! = n * (n-1); Example: 5! = 5 * 4 * 3 * 2 * 1
        return n * factorial(n - 1);
    }
}