#pragma once

template<typename T>
void bubbleSort(T (&arr)[], int len)
{
    for(int i = 0; i < len; i++)
    {
        for(int j = i + 1; j < len ; j++)
        {
            if(arr[i] > arr[j])
            {
                swapAB(arr[i], arr[j]);
            }
        }
    }
}
