#include <memory>
#include "IsMac48Address.h"
#include <CppUTest/TestHarness.h>

TEST_GROUP(IsMac48Address)
{

};

TEST(IsMac48Address, Test1)
{
  CHECK(IsMac48Address("00-1B-63-84-45-E6") == true);
}

TEST(IsMac48Address, Test2)
{
  CHECK(IsMac48Address("Z1-1B-63-84-45-E6") == false);
}

TEST(IsMac48Address, Test3)
{
  CHECK(IsMac48Address("not a MAC-48 address") == false);
}

TEST(IsMac48Address, Test4)
{
  CHECK(IsMac48Address("FF-FF-FF-FF-FF-FF") == true);
}

TEST(IsMac48Address, Test5)
{
  CHECK(IsMac48Address("FF-FF-AB-CD-EA-BC") == true);
}
