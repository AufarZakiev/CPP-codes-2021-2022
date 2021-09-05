#include <cassert>
#include <iostream>

bool sendReport() {}

void f(bool thing1, bool thing2) {
  bool b{sendReport()};
  assert(b);
  return;
}

int main() {}