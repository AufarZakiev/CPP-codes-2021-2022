#include <chrono>
#include <iomanip>
#include <iostream>

volatile int sink;

auto benchmark = [](auto fun, auto rem) {
  const auto start = std::chrono::high_resolution_clock::now();
  for (auto size{1ULL}; size != 100'000'000ul; ++size) {
    sink = fun(size);
  }
  const std::chrono::duration<double> diff =
      std::chrono::high_resolution_clock::now() - start;
  std::cout << "Time: " << std::fixed << std::setprecision(6) << diff.count()
            << " sec " << rem << std::endl;
};

int square1(const int &val) { return val * val; }

int square2(const int &val) { return square1(val); }

int main() {
  benchmark(square1, "square1");
  char c;
  std::cin >> c;
  benchmark(square2, "square2");
}

// constexpr?