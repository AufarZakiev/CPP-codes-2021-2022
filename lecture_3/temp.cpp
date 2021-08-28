#include <cmath>
#include <iomanip>
#include <iostream>
#include <numbers>

int main() {
  auto old_pi = M_PI;
  auto new_pi_f = std::numbers::pi_v<float>;
  auto new_pi_ld = std::numbers::pi_v<long double>;
  std::cout << std::setprecision(40) << old_pi << std::endl;
  std::cout << std::setprecision(40) << new_pi_f << std::endl;
  std::cout << std::setprecision(40) << new_pi_ld << std::endl;
}