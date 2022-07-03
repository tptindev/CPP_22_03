#pragma once

std::string longest_palindromic_substring(std::string s)
{
    int len = s.length();
    if (len == 1)
        return s;
    else if (len == 2)
        return (s[0] == s[1] ? s : std::string(1, s[0]));
    else
    {
        int L = 0;
        int R = 1;
        while (L >= 0 && R < len)
        {
            if (s[L] == s[R])
            {
            }
            std::cout << "Left: " << L << ", Right: " << R << std::endl;
            L = R;
            R++;
        }
        return s.substr(L, R);
    }
}
