#pragma once

std::string getMaxStr(std::vector<std::string> v)
{

    std::string maxStr = "";
    if(v.size() > 0)
    {
        maxStr = v.at(0);
        for(std::string s:v)
        {
            if(s.length() > maxStr.length())
            {
                maxStr = s;
//                std::cout << "Max: " << maxStr << std::endl;
            }
        }
    }
    return maxStr;
}
