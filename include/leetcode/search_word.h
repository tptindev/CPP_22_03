#pragma once
#include <string>
#include <vector>
// 4, 5, 0
bool search(std::vector<std::vector<char>> &board, std::string &word, int row, int col, int wordIndex)
{
    if (wordIndex == word.size())
        return true;

    // Invalid index
    if (row < 0 || row >= board.size() || col < 0 || col >= board[row].size() || board[row][col] != word[wordIndex])
    {
        return false;
    }
    board[row][col] = ' ';

    // 4, 4, 1
    // 4, 3
    // 4, 2
    // 4, 1,
    // 4, 0
    bool left = search(board, word, row, col - 1, wordIndex + 1);
    //
    bool right = search(board, word, row, col + 1, wordIndex + 1);
    bool up = search(board, word, row + 1, col, wordIndex + 1);
    bool down = search(board, word, row - 1, col, wordIndex + 1);
    board[row][col] = word[wordIndex];
    return left || right || up || down;
}
bool exist(std::vector<std::vector<char>> &board, std::string word)
{
    if (word == "")
    {
        return false;
    }

    for (int row = 0; row < board.size(); row++)
    {
        for (int col = 0; col < board[0].size(); col++)
        {
            if (board[row][col] == word[0] && search(board, word, row, col, 0))
            {
                return true;
            }
        }
    }

    return false;
}