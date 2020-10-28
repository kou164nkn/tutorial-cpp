#include <iostream>

int& ref() { // int& とすると左辺値(lvalue) となり, main.cpp で返値に代入可能
  static int x;
  return x;
}

int main() {
  std::cout << ref() << std::endl;
  ref() = 5; // ref() の返り値が int だと、右辺値(rvalue) となり, 代入ができなくなる
  std::cout << ref() << std::endl;
}