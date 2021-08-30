#include <iostream>
#include <string>

int main() {
  std::cout << "Введите имя: " << std::endl;
  std::string name;
  std::getline(std::cin, name);

  std::cout << "Hello, " << name << "!" << std::endl;
}