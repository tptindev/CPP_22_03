#pragma once

#include "bubble_sort.h"
#include "quick_sort.h"

template<typename T>
void printArr(T arr[], int len)
{
    for(int i = 0; i < len ; i++)
    {
        std::cout << arr[i] << ",";
    }
}
