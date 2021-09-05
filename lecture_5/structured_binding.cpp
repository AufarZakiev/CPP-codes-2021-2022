#include <iostream>
#include <utility>

std::pair<double, double> getQuadraticRoots(double a, double b, double c) {
  //...
  return std::pair<double, double>{4.5, 5.6};
}

int main() {
  std::cout << getQuadraticRoots(1, 2, 4).first << ";"
            << getQuadraticRoots(1, 2, 4).second << std::endl;

  /*
    1) std::pair
    2) auto as return type
    3) structured bindings
    4) const ref structured bindings
  */
}