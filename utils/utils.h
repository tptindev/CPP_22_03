#pragma once
#include <string>
#include "swap.h"
#include "int_to_array.h"

std::map<char, int> countDupsInStr(std::string str)
{
    int len = str.length();
    std::map<char, int> counter;
    for(int i = 0; i < len; i++)
    {
        counter[str[i]]++;
    }
    return counter;
}
