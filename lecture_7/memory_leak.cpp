#include <chrono>
#include <thread>

using namespace std::chrono_literals;

int main() {
  for (int i = 0; i < 100; i++) {
    int *m = new int[10'000'000]; // создание массива из 10'000'000 int
    std::this_thread::sleep_for(1s);
  }
}