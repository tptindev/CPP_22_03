#pragma once

std::string getMaxStr(std::vector<std::string> v)
{
    if(v.size() <= 0) return "";
    std::string maxStr = v.at(0);
    for(std::string s:v)
    {
        if(s.length() > maxStr.length())
        {
            maxStr = s;
        }
    }
    return maxStr;
}
