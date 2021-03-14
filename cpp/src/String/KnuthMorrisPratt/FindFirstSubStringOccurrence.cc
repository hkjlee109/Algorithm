#include "FindFirstSubStringOccurrence.h"

int FindFirstSubStringOccurrence(string s, string x)
{
  vector<int> lps(x.size(), 0);

  for(int i = 1, j = 0; i < x.size(); ++i)
  {
    while(j && x[i] != x[j])
      j = lps[j - 1];

    if(x[i] == x[j])
      ++j;

    lps[i] = j;
  }

  for(int i = 0, j = 0; i < s.size(); i++)
  {
    while(j && s[i] != x[j]) j =
      lps[j - 1];

    if(s[i] == x[j])
      j++;

    if(j == x.size())
      return i - j + 1;
  }

  return -1;
}
