#include <iostream>

int main() {
  int data[6]{1, 2, 3, 4, 5};
  std::cout << "*data: " << *data << std::endl;
  std::cout << "data[0]: " << data[0] << std::endl;
  std::cout << "*(data+0): " << *(data + 0) << std::endl;
  std::cout << "data[6]: " << data[6] << std::endl;
  std::cout << "*(data+1): " << *(data + 1) << std::endl;
  std::cout << "*(data+4): " << *(data + 4) << std::endl;
  std::cout << "*(&data[4] - 1): " << *(&data[4] - 1) << std::endl;
}