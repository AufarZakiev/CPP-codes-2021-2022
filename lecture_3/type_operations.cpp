#include <iostream>
#include <string>

int main() {
  std::string str = "Whoooa!";
  std::cout << str << std::endl;
  // std::cout << b1 / 4 << std::endl; ошибка компиляции

  bool b = true;
  std::cout << std::boolalpha << b << std::endl;
  std::cout << b / 4 << std::endl;
  std::cout << b / 4.0 << std::endl;
  std::cout << b / 'c' << std::endl;
}