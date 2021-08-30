#include <iostream>
#include <string>
#include <vector>

int main() {

  std::vector<std::string> address_book{"ITIS"};

  const auto it{std::find(address_book.begin(), address_book.end(),
                          "ITIS")}; // нехорошо, it засоряет пространство имен
  if (it != address_book.end()) {
    std::cout << *it << " is in address book" << std::endl;
  } else {
    std::cout << "ITIS is not in address book\n";
  }
}