#include <iostream>
#include <limits>

int main() {
  std::cout << "bool:\t\t" << sizeof(bool) << " bytes"
            << " [" << std::numeric_limits<bool>::min() << ":"
            << std::numeric_limits<bool>::max() << "]" << std::endl;
  std::cout << "char:\t\t" << sizeof(char) << " bytes"
            << " [" << std::numeric_limits<char>::min() << ":"
            << std::numeric_limits<char>::max() << "]" << std::endl;
  std::cout << "short:\t\t" << sizeof(short) << " bytes"
            << " [" << std::numeric_limits<short>::min() << ":"
            << std::numeric_limits<short>::max() << "]" << std::endl;
  std::cout << "int:\t\t" << sizeof(int) << " bytes"
            << " [" << std::numeric_limits<int>::min() << ":"
            << std::numeric_limits<int>::max() << "]" << std::endl;
  std::cout << "long:\t\t" << sizeof(long) << " bytes"
            << " [" << std::numeric_limits<long>::min() << ":"
            << std::numeric_limits<long>::max() << "]" << std::endl;
  std::cout << "long long:\t" << sizeof(long long) << " bytes"
            << " [" << std::numeric_limits<long long>::min() << ":"
            << std::numeric_limits<long long>::max() << "]" << std::endl;
  std::cout << "size_t:\t\t" << sizeof(size_t) << " bytes"
            << " [" << std::numeric_limits<size_t>::min() << ":"
            << std::numeric_limits<size_t>::max() << "]" << std::endl;
  std::cout << "float:\t\t" << sizeof(float) << " bytes"
            << " [" << std::numeric_limits<float>::min() << ":"
            << std::numeric_limits<float>::max() << "]" << std::endl;
  std::cout << "double:\t\t" << sizeof(double) << " bytes"
            << " [" << std::numeric_limits<double>::min() << ":"
            << std::numeric_limits<double>::max() << "]" << std::endl;
  std::cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes"
            << " [" << std::numeric_limits<int8_t>::min() << ":"
            << std::numeric_limits<int8_t>::max() << "]" << std::endl;
  std::cout << "int16_t:\t\t" << sizeof(int16_t) << " bytes"
            << " [" << std::numeric_limits<int16_t>::min() << ":"
            << std::numeric_limits<int16_t>::max() << "]" << std::endl;
  std::cout << "int32_t:\t\t" << sizeof(int32_t) << " bytes"
            << " [" << std::numeric_limits<int32_t>::min() << ":"
            << std::numeric_limits<int32_t>::max() << "]" << std::endl;
  std::cout << "int64_t:\t\t" << sizeof(int64_t) << " bytes"
            << " [" << std::numeric_limits<int64_t>::min() << ":"
            << std::numeric_limits<int64_t>::max() << "]" << std::endl;
  std::cout << "int_fast8_t:\t\t" << sizeof(int_fast8_t) << " bytes"
            << " [" << std::numeric_limits<int_fast8_t>::min() << ":"
            << std::numeric_limits<int_fast8_t>::max() << "]" << std::endl;
  std::cout << "int_fast16_t:\t\t" << sizeof(int_fast16_t) << " bytes"
            << " [" << std::numeric_limits<int_fast16_t>::min() << ":"
            << std::numeric_limits<int_fast16_t>::max() << "]" << std::endl;
  std::cout << "int_fast32_t:\t\t" << sizeof(int_fast32_t) << " bytes"
            << " [" << std::numeric_limits<int_fast32_t>::min() << ":"
            << std::numeric_limits<int_fast32_t>::max() << "]" << std::endl;
  std::cout << "int_fast64_t:\t\t" << sizeof(int_fast64_t) << " bytes"
            << " [" << std::numeric_limits<int_fast64_t>::min() << ":"
            << std::numeric_limits<int_fast64_t>::max() << "]" << std::endl;
  std::cout << "int_least8_t:\t\t" << sizeof(int_least8_t) << " bytes"
            << " [" << std::numeric_limits<int_least8_t>::min() << ":"
            << std::numeric_limits<int_least8_t>::max() << "]" << std::endl;
  std::cout << "int_least16_t:\t\t" << sizeof(int_least16_t) << " bytes"
            << " [" << std::numeric_limits<int_least16_t>::min() << ":"
            << std::numeric_limits<int_least16_t>::max() << "]" << std::endl;
  std::cout << "int_least32_t:\t\t" << sizeof(int_least32_t) << " bytes"
            << " [" << std::numeric_limits<int_least32_t>::min() << ":"
            << std::numeric_limits<int_least32_t>::max() << "]" << std::endl;
  std::cout << "int_least64_t:\t\t" << sizeof(int_least64_t) << " bytes"
            << " [" << std::numeric_limits<int_least64_t>::min() << ":"
            << std::numeric_limits<int_least64_t>::max() << "]" << std::endl;
  // Знатоки, вопрос: когда выполняется оператор sizeof: во время компиляции или
  // во время выполнения программы?
}