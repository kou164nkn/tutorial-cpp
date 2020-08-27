#include <cctype>
#include <limits>
#include <iostream>

int main() {
  unsigned int i = 0b1001;
  unsigned int d = 9;

  // 0b1001 == 0b1000 + 0b1
  //        == 2^3 + 1
  //        == 9
  std::cout << i << std::endl; // => 9
  std::cout << d << std::endl; // => 9


  i = 0b10011100;
  unsigned int x = 0x9c; // 159

  // 0b10011100 == 1001 1100
  //            == 9    c
  //            == 0x9c
  std::cout << i << std::endl; // => 159
  std::cout << x << std::endl; // => 159

  unsigned int o = 0640;
  unsigned int zero = 0; // 8進数の0

  std::cout << o << std::endl;    // => 416
  std::cout << zero << std::endl; // => 0
}