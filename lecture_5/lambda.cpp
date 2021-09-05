#include <iostream>

int main() {
  std::string name = "Aufar";
  std::string surname = "Zakiev";

  auto greet = [&] { // change to =name
    name = "Mr. " + name;
    std::cout << "Hello, " << name << " " << surname << std::endl;
  };
  greet();

  std::cout << "Name = " << name << std::endl;
}