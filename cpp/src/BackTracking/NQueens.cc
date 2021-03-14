#include "NQueens.h"

static bool isOkay(vector<vector<bool>> &board, int row, int col)
{
  for(int y = 0; y < row; y++)
    if(board[y][col]) return false;

  for(int y = row, x = col; y >= 0 && x >= 0; y--, x--)
    if(board[y][x]) return false;

  for(int y = row, x = col; y >= 0 && x < board.size(); y--, x++)
    if(board[y][x]) return false;

  return true;
}

static void findNQueens(vector<vector<bool>> &board, vector<vector<int>> &result, int row = 0)
{
  if(row == board.size())
  {
    vector<int> v(board.size());
    for(int y = 0; y < board.size(); ++y)
    {
      for(int x = 0; x < board.size(); ++x)
        if(board[y][x]) v[y] = x + 1;
    }
    result.push_back(v);
    return;
  }

  for(int x = 0; x < board.size(); x++)
  {
    if(isOkay(board, row, x))
    {
      board[row][x] = true;
      findNQueens(board, result, row + 1);
      board[row][x] = false;
    }
  }
}

vector<vector<int>> NQueens(int n)
{
  vector<vector<int>> result;
  vector<vector<bool>> board(n , vector<bool>(n, false));
  findNQueens(board, result);
  return result;
}
