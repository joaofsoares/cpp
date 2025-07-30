#include <catch2/catch_all.hpp>

int add(int a, int b) { return a + b; }

TEST_CASE("testing add function", "[add_function]") { REQUIRE(2 == add(1, 1)); }

int main() {
  int result = Catch::Session().run();
  return result;
}
