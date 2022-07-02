#pragma once

std::string longest_palindromic_substring(std::string s)
{
        std::vector<std::string> tmp;
        std::map<std::string, int> table;
        int len = s.length();
        if(len == 1) return s;
        else if(len == 2) return (s[0] == s[1]? s:std::string(1,s[0]));
        else
        {
            int L = 0;
            int M = 1;
            int R = 2;

            while(R < len)
            {
                std::string k;
                if(M == R)
                    k = std::string(1, s[L]) + std::string(1, s[R]);
                else if(s[L] == s[R])
                    k = std::string(1, s[L]) + std::string(1, s[M]) + std::string(1, s[R]);
                else if(s[L] == s[M])
                    k = std::string(1, s[L]) + std::string(1, s[M]);
                else if(s[R] == s[M])
                    k = std::string(1, s[R]) + std::string(1, s[M]);
                if(k != "")
                {
                    table[k] = L;
                    tmp.push_back(k);
                }
                L = M;
                M = R;
                R++;
            }
            for(auto it:table)
            {
                int lenW = it.first.length();
                int l = it.second;
                int r = l + lenW - 1;
                std::string newStr = it.first;
                while(l > 0 && r < len)
                {
                    --l;
                    ++r;
                    if(s[l] == s[r])
                    {
                        newStr =  s[l] + newStr + s[r];
                        tmp.push_back(newStr);

                    }
                }
            }
        }
        return getMaxStr(tmp);
}
