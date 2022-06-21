#pragma once

template <typename T>
int len(T arr[]) {
    int length = 0;
    for (T a: arr)
        length++;
    return length;
}

template <typename T, size_t n>
void findSize(T (&arr)[n])
{
    std::cout << sizeof(T) * n << std::endl;
}
