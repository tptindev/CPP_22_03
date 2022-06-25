#pragma once
template<typename T>
void quickSort(T (&arr)[], int left, int right)
{
    int pivot = arr[(left + right)/2];
    int l = left;
    int r = right;
    do
    {
        while(arr[l] < pivot) l++;
        while(arr[r] > pivot) r--;
        if(l <= r)
        {
            swapAB(arr[l], arr[r]);
            l++;
            r--;
        }
    }while(l <= r);

    if(left < r)
    {
        quickSort(arr, left, r);
    }
    if(l < right)
    {
        quickSort(arr, l, right);
    }
}
