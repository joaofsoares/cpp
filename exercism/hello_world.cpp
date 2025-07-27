#include "hello_world.h"
#include <iostream>

namespace hello_world {

std::string hello() { return "Hello, World!"; }

} // namespace hello_world

int main() {
  std::cout << hello_world::hello() << std::endl;
  return 0;
}
