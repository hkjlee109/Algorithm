#include <memory>
#include "PagesNumberingWithInk.h"
#include <CppUTest/TestHarness.h>

TEST_GROUP(PagesNumberingWithInk)
{

};

TEST(PagesNumberingWithInk, Test1)
{
  CHECK(PagesNumberingWithInk(1, 5) == 5);
}

TEST(PagesNumberingWithInk, Test2)
{
  CHECK(PagesNumberingWithInk(21, 5) == 22);
}

TEST(PagesNumberingWithInk, Test3)
{
  CHECK(PagesNumberingWithInk(8, 4) == 10);
}

TEST(PagesNumberingWithInk, Test4)
{
  CHECK(PagesNumberingWithInk(21, 6) == 23);
}

TEST(PagesNumberingWithInk, Test5)
{
  CHECK(PagesNumberingWithInk(76, 250) == 166);
}
