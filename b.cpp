#include <type_traits>

#include "doctest.h"

using namespace doctest;

#pragma pack(push, 4)
struct dummy_4 {
  char a;
  short b;
};
#pragma pack(pop)
TEST_CASE("test in file b") {
  // check fail
  // maybe bug?
  CHECK(alignof(dummy_4) == std::alignment_of_v<dummy_4>);
  // However, static_assert passed
  static_assert(alignof(dummy_4) == std::alignment_of_v<dummy_4>);
}
