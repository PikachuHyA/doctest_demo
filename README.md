# doctest_demo

How to?

```shell
git clone https://github.com/PikachuHyA/doctest_demo.git
cd doctest_demo
git clone https://github.com/doctest/doctest.git
cmake -S . -B build
cmake --build build
./build/doctest_demo
```

output
```shell
[doctest] doctest version is "2.4.9"
[doctest] run with "--help" for options
===============================================================================
/Users/shuoshu/CLionProjects/doctest_demo/b.cpp:13:
TEST CASE:  test in file b

/Users/shuoshu/CLionProjects/doctest_demo/b.cpp:16: ERROR: CHECK( alignof(dummy_4) == std::alignment_of_v<dummy_4> ) is NOT correct!
  values: CHECK( 2 == 4 )

===============================================================================
[doctest] test cases: 2 | 1 passed | 1 failed | 0 skipped
[doctest] assertions: 2 | 1 passed | 1 failed |
[doctest] Status: FAILURE!

```
