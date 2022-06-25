#pragma once

std::string longest_palindromic_substring(std::string s)
{
    int len = s.length();
    if(len == 1) return s;
    else
    {
        std::map<int, char> sMap;
        for(int i = 0; i < s.length(); i++)
            sMap[i] = s[i];

        for(auto it:countDupsInStr(s))
        {
            if(it.second > 1)
            {
                for(auto it2:sMap)
                {
                    if(it2.second == it.first)
                    {
                        std::cout << it2.second << std::endl;
                    }
                }
            }

        }
    }
    return s;
}
