#include "PagesNumberingWithInk.h"
#include <math.h>

int PagesNumberingWithInk(int current, int numberOfDigits)
{
  while(numberOfDigits >= 0)
    numberOfDigits -= (int)log10(current++) + 1;

  return current - 2;
}
