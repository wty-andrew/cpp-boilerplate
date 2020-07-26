#include "doctest.h"

#include "mock_foo.h"

TEST_CASE("testing foo can get something") {
  int value = 10;
  MockFoo foo;
  foo.value = value;
  CHECK(foo.get_something() == value);
}
