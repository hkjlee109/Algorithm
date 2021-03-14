#include "IsMac48Address.h"
#include <regex>

bool IsMac48Address(string s)
{
  regex reg("^([0-9A-F][0-9A-F][:-]){5}([0-9A-F][0-9A-F])$");
  sregex_iterator match_it(s.begin(), s.end(), reg);
  return !(*match_it).empty();
}
