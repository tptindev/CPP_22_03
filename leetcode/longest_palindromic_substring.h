#pragma once

std::string longest_palindromic_substring(std::string s)
{
    std::vector<std::string> tmp;
    std::map<std::string, int> table;
    int len = s.length();
    if(len == 1) return s;
    else
    {
        int L = 0;
        int M = L;
        int R = 1;

        while(R < len)
        {
            std::string k;
            if(M == R)
                k = std::string(1, s[L]) + std::string(1, s[R]);
            else if(s[L] == s[R])
                k = std::string(1, s[L]) + std::string(1, s[M]) + std::string(1, s[R]);
            else if(s[L] == s[M] && M > L)
                k = std::string(1, s[L]) + std::string(1, s[M]);
            else if(s[R] == s[M] && M > L)
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
        printVec(tmp);
        for(auto it:table)
        {
            int lenW = it.first.length();
            int l = it.second;
            int r = l + lenW - 1;
            std::string newStr = it.first;
            std::cout << "\nSub String: " << it.first << " LEFT:" << l << " RIGHT:" << r << " LEN:" << len << std::endl;
            if(it.first.length() == 2)
            {
                tmp.push_back(it.first);
            }
            while(l > 0 && r < len)
            {
                --l;
                ++r;
                if(s[l] == s[r])
                {
                    newStr =  s[l] + newStr + s[r];
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
