#include <iostream>

// clang++-10 -Wall -Wextra -c main.cpp
// objdump -d -M intel main.cpp
// でアセンブリを見てみると

int return_plus1() {
  return 1; // 0x1
}

int return_plus2() {
  return 2; // 0x2
}

int return_minus1() {
  return -1; // 0xffffffff
}

int return_minus2() {
  return -2; // 0xfffffffe
}

int main() {
  if(20) {} // 非0 = 真

  bool b{true};
  bool b2{false};
  bool b3 = 42;
  // 余談 bool b3{42} はintからboolへ精度が落ちる型変換のためエラーとなる
  int i3 = b3;

  if (i3) {
    std::cout << "b3は真" << std::endl;
    std::cout << i3 << std::endl; // 1が出力
    std::cout << std::boolalpha << b3 << std::endl; // std::boolalphaを使うとb3の値はtrueで出力される(通常は1)
  }
}