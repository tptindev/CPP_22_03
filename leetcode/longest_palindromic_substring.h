#pragma once

std::string longest_palindromic_substring(std::string s)
{
    std::vector<std::string> tmp;
    std::map<std::string, int> table;
    int len = s.length();
    if(len == 1)return s;
    else
    {
        int L = 0;
        int R = 1;
        int M = L;
        while(R < len)
        {
            std::string k = "";
            if(s[L] == s[R])
                k = std::string(1, s[L]) + std::string(1, s[M]) + std::string(1,s[R]);
            else if(s[L] == s[M] && M > 0)
                k = std::string(1, s[L]) + std::string(1, s[M]);
            else if(s[R] == s[M] && M > 0)
                k = std::string(1, s[M]) + std::string(1, s[R]);
            if(k != "")
                table[k] = L;

            L = M;
            M = R;
            R++;
        }

        for(auto it:table)
        {
            int len = it.first.length();
            int l = it.second;
            int r = it.second + len - 1;
            std::cout << "Sub String: " << it.first << " LEFT:" << l << " RIGHT:" << r << std::endl;
            for(int i = 0; i < (r - l) ; i++)
            {
                if(it.first.length() == 2)
                {
                    tmp.push_back(it.first);
                }
                else if(s[--l] == s[++r])
                {
                    std::string newStr = s[l] + it.first + s[r];
                    tmp.push_back(newStr);
                    if(l < 0 || r >= len)
                        break;
                }
            }
        }
    }

    return getMaxStr(tmp);
}