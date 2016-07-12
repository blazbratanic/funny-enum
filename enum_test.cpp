#include "enum.h"

#include <iostream>

enum Test {Ena, Dva, Tri};

BETTER_ENUM(Param1, int, Red=1, Blue=13, Green=32, Default=Test::Tri);
BETTER_ENUM(Param2, int, Red=1, Blue=13, Green=32, Default=Blue);
BETTER_ENUM(Param3, int, Red=1, Blue=13, Green=32, Default=Green);

int main() {
  for (auto e : Param1::values()) {
    std::cout << e << " " << e._value << std::endl;
  }

  std::cout << Param1::from_string_nothrow("Red")->_value << std::endl;

  auto color = Param1::Red;

  if (Param1::Red == color) {
    std::cout << "Red" << std::endl;
  }
  std::cout << Param1::_size() << std::endl;

  return 0;

}
