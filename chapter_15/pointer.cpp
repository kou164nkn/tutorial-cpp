#include <iostream>

int main() {
  int n;
  double x;

  std::cout << "n's address: " << &n << std::endl;
  std::cout << "n's size:    " << sizeof(n) << std::endl;
  std::cout << "x's address: " << &x << std::endl;
  std::cout << "x's size:    " << sizeof(x) << std::endl;

  std::cout << "-----------" << std::endl;

  std::cout << "n's address: " << &n << std::endl;
  std::cout << "n's size:    " << sizeof(n) << std::endl;  // int型変数n は4バイト
  std::cout << "&n's size:   " << sizeof(&n) << std::endl; // 変数n のメモリ上アドレス(ポインタ)は8バイトで表現される

  int* p = &n;
  std::cout << "p's address: " << &p << std::endl;
  std::cout << "p's size:    " << sizeof(p) << std::endl;  // ポインタ変数のサイズは 8バイト
  std::cout << "&p's size:   " << sizeof(&p) << std::endl; // ポインタ変数のアドレスのサイズは8バイト
}