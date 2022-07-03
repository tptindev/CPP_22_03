#pragma once

std::vector<int>intToArr(int num)
{
    std::string s = std::to_string(num);
    std::vector<int> vec;
    for (int i = s.length(); i > 0; i--) {
        vec.push_back(num % 10) ;
        num /= 10;
    }
    return vec;
}
