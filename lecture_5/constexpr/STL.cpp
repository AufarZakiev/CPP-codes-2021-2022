#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

struct User {
  int age;
  std::string name;
  std::vector<int> achievement_ids;
};

template <size_t Size>
constexpr long static_sum(const std::vector<User> &users) {
  long sum = 0;
  for (int i{0}; i < Size; i++) {
    sum += users[i].age;
  }
  return sum;
}

long get_sum(const std::vector<User> &users) {
  long sum = 0;
  for (const auto &user : users) {
    sum += user.age;
  }
  return sum;
}

int main() {
  std::vector<User> vec(3000000, User{18, "Ivan", {1, 2, 3}});
  auto start = std::chrono::high_resolution_clock::now();

  std::cout << get_sum(vec) << std::endl;

  std::chrono::duration<double> diff =
      std::chrono::high_resolution_clock::now() - start;
  std::cout << "Time: " << std::fixed << std::setprecision(6) << diff.count()
            << " sec - Simple" << std::endl;

  start = std::chrono::high_resolution_clock::now();

  constexpr auto g = static_sum<3000000>(vec);
  std::cout << g << std::endl;

  diff = std::chrono::high_resolution_clock::now() - start;
  std::cout << "Time: " << std::fixed << std::setprecision(6) << diff.count()
            << " sec - Static" << std::endl;
}