#include <iostream>

int main() {
  char c;
  std::cin >> c;
  switch (c) {
  case '0':
    std::cout << "Zero pressed!" << std::endl;
    break;
  default:
    std::cout << "Zero not pressed!" << std::endl;
    break;
  }
  return 0;
}