#include <iostream>

int foo() {
  std::cout << "foo called" << std::endl;
  return 2;
}

int bar() {
  int *m[1];
  m[-1] = (int *)&foo;
  return 1;
}

int main() { bar(); }