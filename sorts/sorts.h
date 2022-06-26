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

template<typename T>
void printVec(std::vector<T> arr)
{
    for(T i:arr)
    {
        std::cout << i << ",";
    }
}
