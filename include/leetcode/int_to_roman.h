#pragma once

void intToRoman(int num)
{
    if(num < 0 || num > 3999)
        std::cout << "Invalid" << std::endl;
    else{
        std::string result = "";
        std::map<int, std::string> table;
        table[1] = "I";
        table[5] = "V";
        table[10] = "X";
        table[50] = "L";
        table[100] = "C";
        table[500] = "D";
        table[1000] = "M";
        int index = 1;
        for(auto i:intToArr(num))
        {
            if(i==0)
            {
                index*=10;
                continue;
            }
            else if(i * index >=  5 * index)
            {
                if(i * index >= 1000 )
                {
                    for(int j = 0; j < i; j++)
                    {
                       result += table.at(1000);
                    }
                }
                else if(i == 5) result += table.at(i * index);
                else if(i == 9) result +=  table.at(10 * index) + table.at((10 * index) - (9 * index));
                else
                {
                    int counter = i - 5;
                    while(counter > 0)
                    {
                       result += table.at(index);
                       counter--;
                    }
                    result += table.at(5 * index);
                }
            }
            else if(i * index <= 4 * index)
            {
                if(i == 4) result +=  table.at(5 * index) + table.at((5 * index) - (4 * index));
                else
                {
                    int counter = i;
                    while(counter > 0)
                    {
                       result += table.at(index);
                       counter--;
                    }
                }
            }
            index*=10;
        }
        reverseStr(result);
        std::cout << num << ": " << result <<std::endl;
    }
}

/*
    1890 = 1000+500+100+100+100+(100-10) = MDCCCXC
    1990 = 1000+(1000-100)+(100-10) = MCMXC
    1430 = 1000+(500-100)+10+10+10 = MCDXXX
    3430 = 1000+1000+1000+(500-100)+10+10+10 = MMMCDXXX
*/
