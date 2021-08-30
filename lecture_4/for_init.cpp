#include <iostream>
#include <string>
#include <vector>

int main() {
  for (std::vector<std::string> options{"Start", "Settings",
                                        "Exit"}; // перенести в функцию
       auto option : options) {
    std::cout << option << std::endl;
  }
  return 0;
}