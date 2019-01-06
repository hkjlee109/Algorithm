#include <memory>
#include "FindFirstSubStringOccurrence.h"
#include <CppUTest/TestHarness.h>

TEST_GROUP(FindFirstSubStringOccurrence) {};

TEST(FindFirstSubStringOccurrence, Test1)
{
  int expected = -1;
  int actual = FindFirstSubStringOccurrence(
    "CodefightsIsAwesome",
    "IA");

  CHECK(expected == actual);
}

TEST(FindFirstSubStringOccurrence, Test2)
{
  int expected = 10;
  int actual = FindFirstSubStringOccurrence(
    "CodefightsIsAwesome",
    "IsA");

  CHECK(expected == actual);
}

TEST(FindFirstSubStringOccurrence, Test3)
{
  int expected = 0;
  int actual = FindFirstSubStringOccurrence(
    "a",
    "a");

  CHECK(expected == actual);
}

TEST(FindFirstSubStringOccurrence, Test4)
{
  int expected = 1;
  int actual = FindFirstSubStringOccurrence(
    "sst",
    "st");

  CHECK(expected == actual);
}

TEST(FindFirstSubStringOccurrence, Test5)
{
  int expected = 38;
  int actual = FindFirstSubStringOccurrence(
    "lrnkbldxguzgcseccinlizyogwqzlifxcthdgmanjztlt",
    "an");

  CHECK(expected == actual);
}

TEST(FindFirstSubStringOccurrence, Test6)
{
  int expected = -1;
  int actual = FindFirstSubStringOccurrence(
    "aBcDefghaBcdEFgh",
    "qhB");

  CHECK(expected == actual);
}

TEST(FindFirstSubStringOccurrence, Test7)
{
  int expected = 14;
  int actual = FindFirstSubStringOccurrence(
    "abcdefghabcdefghi",
    "ghi");

  CHECK(expected == actual);
}

TEST(FindFirstSubStringOccurrence, Test8)
{
  int expected = 59;
  int actual = FindFirstSubStringOccurrence(
    "ATErUUeUkVFVNfxfUKtntOErKmZLUpWpHRASdxjUhzzxygmnNnKabPPgPqyvCLSCZObaNNGCXQssfEEDDJIPBwtkMmTniKapBlrd",
    "vCLSCZObaNNGCXQssfEEDDJIPBwtkMmTniKa");

  CHECK(expected == actual);
}

TEST(FindFirstSubStringOccurrence, Test9)
{
  int expected = -1;
  int actual = FindFirstSubStringOccurrence(
    "IckcYWDCgWkDBMudMVWZOBatEloOzayVtvsLgUSsaaFxZQAivbqtuGerRravCLSCZObaNNGCXQssfEEDDJIPBwtkMmTniKxNrWZl",
    "vCLSCZObaNNGCXQssfEEDDJIPBwtkMmTniKa");

  CHECK(expected == actual);
}

TEST(FindFirstSubStringOccurrence, Test10)
{
  int expected = -1;
  int actual = FindFirstSubStringOccurrence(
    "GTgpEYIWKIWrlEtByHryETrBeTWNkHutWKOCvVNRSGSxaynjzTatJMKSwCLSCZObaNNGCXQssfEEDDJIPBwtkMmTniKaKfqaOtvO",
    "vCLSCZObaNNGCXQssfEEDDJIPBwtkMmTniKa");

  CHECK(expected == actual);
}


// TEST(FindFirstSubStringOccurence, Test3)
// {
//   vector<vector<int>> expected {};
//
//   vector<vector<int>> actual = NQueens(2);
//   CHECK(expected == actual);
// }
//
// TEST(NQueens, Test4)
// {
//   vector<vector<int>> expected {};
//
//   vector<vector<int>> actual = NQueens(3);
//   CHECK(expected == actual);
// }
//
// TEST(NQueens, Test5)
// {
//   vector<vector<int>> expected {
//     { 2, 4, 6, 1, 3, 5 },
//     { 3, 6, 2, 5, 1, 4 },
//     { 4, 1, 5, 2, 6, 3 },
//     { 5, 3, 1, 6, 4, 2 }
//   };
//
//   vector<vector<int>> actual = NQueens(6);
//   CHECK(expected == actual);
// }
