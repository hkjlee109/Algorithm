#include <memory>
#include "NQueens.h"
#include <CppUTest/TestHarness.h>

TEST_GROUP(NQueens)
{

};

TEST(NQueens, Test1)
{
  vector<vector<int>> expected { { 1 } };
  vector<vector<int>> actual = NQueens(1);
  CHECK(expected == actual);
}

TEST(NQueens, Test2)
{
  vector<vector<int>> expected {
    { 2, 4, 1, 3},
    { 3, 1, 4, 2 }
  };

  vector<vector<int>> actual = NQueens(4);
  CHECK(expected == actual);
}

TEST(NQueens, Test3)
{
  vector<vector<int>> expected {};

  vector<vector<int>> actual = NQueens(2);
  CHECK(expected == actual);
}

TEST(NQueens, Test4)
{
  vector<vector<int>> expected {};

  vector<vector<int>> actual = NQueens(3);
  CHECK(expected == actual);
}

TEST(NQueens, Test5)
{
  vector<vector<int>> expected {
    { 2, 4, 6, 1, 3, 5 },
    { 3, 6, 2, 5, 1, 4 },
    { 4, 1, 5, 2, 6, 3 },
    { 5, 3, 1, 6, 4, 2 }
  };

  vector<vector<int>> actual = NQueens(6);
  CHECK(expected == actual);
}
