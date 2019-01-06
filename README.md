### How To Build

MacOS
```
make cpputest
make
```

```
MacBookPro:Cpp Harry$ make
c++  -std=c++14 -g -Wall -Icpputest-3.8/include -Isrc/main/BackTracking  -c -o src/test/BackTracking/NQueens_Test.o src/test/BackTracking/NQueens_Test.cpp
g++ -o target/test src/test/AllTests.o src/test/BackTracking/NQueens_Test.o src/main/BackTracking/NQueens.o -Lcpputest-3.8/lib -lCppUTest
target/test -v
TEST(NQueens, Test5) - 0 ms
TEST(NQueens, Test4) - 0 ms
TEST(NQueens, Test3) - 0 ms
TEST(NQueens, Test2) - 0 ms
TEST(NQueens, Test1) - 0 ms

OK (5 tests, 5 ran, 5 checks, 0 ignored, 0 filtered out, 2 ms)
```
