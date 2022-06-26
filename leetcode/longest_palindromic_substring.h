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

            tmp.push_back(k);

            L = M;
            M = R;
            R++;
        }

        for(auto it:table)
        {
            int len_ = it.first.length();
            int l = it.second;
            int r = l + len_ - 1;
            std::string newStr = it.first;
            std::cout << "Sub String: " << it.first << " LEFT:" << l << " RIGHT:" << r << std::endl;
            while(l > 0 && r < len)
            {
                --l;
                ++r;
//                std::cout << s[l] << s[r] << std::endl;
                if(it.first.length() == 2)
                {
                    tmp.push_back(it.first);
                }
                else if(s[l] == s[r])
                {
                    newStr =  s[l] + newStr + s[r];
                    std::cout << newStr << std::endl;
                    tmp.push_back(newStr);
                }
                else
                    break;
            }
        }
        std::cout << "\n";
    }

    return getMaxStr(tmp);
}
