#include <iostream>
#include <string>

int *return_pointer() {
  int a{5}; // показать "маскировку" указателя
  return &a;
}

auto dumb() { int a{10}; }

int main() {
  int *result = return_pointer();
  std::cout << *result << std::endl;
  dumb();
  std::cout << *result << std::endl;
}