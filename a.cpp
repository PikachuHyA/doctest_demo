#include <type_traits>

#include "doctest.h"

using namespace doctest;

struct alignas(4) dummy_4 {
  char a;
  short b;
};

TEST_CASE("test in file a") {
  // If we remove this check statement,
  // "test in file b" will pass
  // Why?
  CHECK(std::alignment_of_v<dummy_4> == 4);
}