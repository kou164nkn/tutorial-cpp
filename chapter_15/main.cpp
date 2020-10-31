#include <iostream>
#include "head.hpp"

// 型や引数が異なれば同名の関数を複数定義できる
int max(int a, int b) {
  return a > b ? a : b;
}

int max(int a, int b, int c) {
  int tmp;
  tmp = a > b ? a : b;
  return tmp > c ? tmp : c;
}

double max(double a, double b) {
  return a > b ? a : b;
}

extern "C" { // C言語でC++の関数を呼び出すためには externt "C" で囲む
  int myfunc(int a) {
    return 1;
  }
}

int main() {
  int x, y, z;

  std::cout << "x, y = ";
  std::cin >> x >> y;
  std::cout << "max(x, y) = " << max(x, y) << std::endl;

  std::cout << "z = ";
  std::cin >> z;
  std::cout << "max(x, y, z) = " << max(x, y, z) << std::endl;


  double a, b;

  std::cout << "double a, b =";
  std::cin >> a >> b;
  std::cout << "max(a, b) = " << max(a, b) << std::endl;
}