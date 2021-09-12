#include <iostream>

int main() {
  int a{5};
  int b{10};
  int c{15};
  std::cout << &a << std::endl; // 0x7fff87b957fc
  std::cout << &b << std::endl; // 0x7fff87b957f8
  std::cout << &c << std::endl; // 0x7fff87b957f4
}