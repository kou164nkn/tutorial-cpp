#include <iostream>
#include <limits>

int main() {
  std::cout << "charは "
    << std::numeric_limits<char>::digits << "ビット" << std::endl;
  std::cout << "unsigned charは "
    << std::numeric_limits<unsigned char>::digits << "ビット" << std::endl;

  char c;
  std::cin >> c;
  std::cout << int(c) << " " << std::hex << int(c) << " " << c << std::endl;
}