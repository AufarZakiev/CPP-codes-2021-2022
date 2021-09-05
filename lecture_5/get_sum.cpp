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

long get_sum(std::vector<User> users) {
  long sum{0};
  for (auto user : users) {
    sum += user.age;
  }
  return sum;
}

int main() {
  std::vector<User> vec(30000000, User{18, "Ivan", {1, 2, 3}});
  auto start{std::chrono::high_resolution_clock::now()};

  get_sum(vec);

  std::chrono::duration<double> diff{std::chrono::high_resolution_clock::now() -
                                     start};
  std::cout << "Time: " << std::fixed << std::setprecision(6) << diff.count()
            << " sec - Func" << std::endl;

  start = std::chrono::high_resolution_clock::now();

  long sum = 0;
  for (auto user : vec) {
    sum += user.age;
  }

  diff = std::chrono::high_resolution_clock::now() - start;
  std::cout << "Time: " << std::fixed << std::setprecision(6) << diff.count()
            << " sec - Simple" << std::endl;
}