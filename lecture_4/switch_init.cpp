#include <iostream>

int main() {
  int i = rand();
  switch (i) {
  case 0:
    std::cout << "Zero!" << std::endl;
    break;
  default:
    std::cout << "Not zero!" << std::endl;
    break;
  }
  return 0;
}