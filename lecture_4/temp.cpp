#include <iostream>

void log(double val) { std::cout << "i: " << val << std::endl; }

int main() {
  int i{2};
  log(i);
  i = i * i;
  log(i);
  i = i * i;
  log(i);
}

// constexpr?