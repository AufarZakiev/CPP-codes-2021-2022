#include <iostream>

// enable -Wextra

int main() {
  int i{0};
  switch (i) {
  case 0:
    std::cout << "Zero!" << std::endl;
    // [[fallthrough]];
  case 1:
    std::cout << "One!" << std::endl;
  default:
    std::cout << "Not zero!" << std::endl;
  }
  return 0;
}