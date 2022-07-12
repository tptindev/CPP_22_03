#pragma once
#include <string>
#include <vector>

bool exist1(std::vector<std::vector<char>> &board, std::string word)
{
    if (word == "")
    {
        return 0;
    }

    for (int row = 0; row < board.size(); row++)
    {
        for (int col = 0; col < board[0].size(); col++)
        {
            if (board[row][col] == word[0])
            {
                int ch_Count = 1;

                ch_Count++;
            }
        }
    }
    return 0;
}