#pragma once

std::string longest_palindromic_substring(std::string s)
{
    int len = s.size();
    bool table[len][len];

    memset(table, 0, sizeof(table));

    int begin = 0;
    int finish = 1;

    // fill 1 for substrings of length 1
    for (int i = 0; i < len; ++i)
        table[i][i] = 1;

    // fill 1 for substrings of length 2
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            table[i][i + 1] = 1;
            begin = i;
            finish = 2;
        }
    }

    // Check for lengths greater than 2
    for (int i = 2; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            int l = j;
            int r = i + j;
            if (table[l + 1][r - 1] == 1 && s[l] == s[r])
            {
                table[l][r] = 1;
                begin = j;
                finish = i + 1;
            }
        }
    }
    return s.substr(begin, finish);
}
