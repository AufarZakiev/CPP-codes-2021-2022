#include "fibs.cpp"
#include <chrono>
#include <iomanip>
#include <iostream>

int main() {
  {
    auto start = std::chrono::high_resolution_clock::now();

    auto result1 = fib(33);
    std::cout << result1 << std::endl;

    std::chrono::duration<double> diff =
        std::chrono::high_resolution_clock::now() - start;
    std::cout << "Time: " << std::fixed << std::setprecision(6) << diff.count()
              << " sec - fib" << std::endl;
  }

  {
    auto start = std::chrono::high_resolution_clock::now();

    constexpr auto result2 = static_fib(33);
    std::cout << result2 << std::endl;

    std::chrono::duration<double> diff =
        std::chrono::high_resolution_clock::now() - start;
    std::cout << "Time: " << std::fixed << std::setprecision(6) << diff.count()
              << " sec - static_fib" << std::endl;
  }
}