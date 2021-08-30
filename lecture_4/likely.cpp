#include <chrono>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <random>

double sqrt_with_attr(double val) {
  if (val >= 0.0)
    [[likely]] { return sqrt(val); }
  else
    [[unlikely]] { return 0.0; }
}

double sqrt_no_attr(double val) {
  if (val >= 0.0) {
    return sqrt(val);
  } else {
    return 0.0;
  }
}

volatile double sink{};

double gen_random() noexcept {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::uniform_real_distribution<double> dis(-1.0, 100.0);
  return dis(gen);
}

auto benchmark = [](auto fun, auto rem) {
  const auto start = std::chrono::high_resolution_clock::now();
  for (auto size{1ULL}; size != 10'000'000ULL; ++size) {
    sink = fun(gen_random());
  }
  const std::chrono::duration<double> diff =
      std::chrono::high_resolution_clock::now() - start;
  std::cout << "Time: " << std::fixed << std::setprecision(6) << diff.count()
            << " sec " << rem << std::endl;
};

int main() {
  benchmark(sqrt_with_attr, "sqrt_with_attr");
  benchmark(sqrt_no_attr, "sqrt_no_attr");
}