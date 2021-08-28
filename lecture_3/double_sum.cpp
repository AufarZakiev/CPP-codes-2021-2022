#include <bit>
#include <bitset>
#include <iomanip>
#include <iostream>

int main() {
  double a{0.1};
  double b{0.2};
  double c{0.3};
  double sum{a + b};
  std::cout << std::boolalpha << (sum == c) << std::endl;
  std::cout << std::setprecision(17) << sum << std::endl;
  std::cout << std::setprecision(17) << c << std::endl;

  std::cout << std::setprecision(16) << "Danger! Cout lies: " << sum
            << std::endl;
  std::cout << std::setprecision(16) << "Danger! Cout lies: " << c << std::endl;

  std::cout << "The only true way: "
            << std::bitset<sizeof(uint64_t)>{std::bit_cast<uint64_t>(sum)}
            << std::endl;
  std::cout << "The only true way: "
            << std::bitset<sizeof(uint64_t)>{std::bit_cast<uint64_t>(c)}
            << std::endl;
}