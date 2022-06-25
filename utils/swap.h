#pragma once

template<typename T>
void swapAB(T &a, T &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void reverseStr(std::string &str)
{
    // abcde -> edcba
    int len = str.length();
    for(int i = 0; i < len / 2; i++)
    {
        int tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}
