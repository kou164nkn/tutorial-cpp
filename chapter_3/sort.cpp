#include <iostream>

int main() {
  int a, b;

  std::cout << "a, b: ";
  std::cin >> a >> b;

  if (a > b) {
    /*
      int tmp;
      tmp = a;
      b = tmp;

      a += b;
      b = a - b;
      a -= b;

      a ^= b ^= a ^= b;
    */
    std::swap(a, b);
  }

  std::cout << "a <= b となるようにソートしました" << std::endl;
  std::cout << a << "," << b << std::endl;
}