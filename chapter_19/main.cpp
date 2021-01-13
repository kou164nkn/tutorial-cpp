#include <new>
#include <iostream>

void f() {
  double* a = new double[10];
  //double* a = new double[0xffffffff];
  std::cout << "allocated " << std::hex
    << reinterpret_cast<unsigned long>(a) << std::endl;

  // 十分大きい整数型にポインタをキャストして
  // さらに元のポインタ型にキャストし直したとき、
  // 元のアドレス値になることが保証される
  a = new double[10];
  std::uintptr_t addr = reinterpret_cast<std::uintptr_t>(a);
  std::cout << "allocated " << std::hex << addr << std::endl;
  double* b = reinterpret_cast<double*>(addr);
  std::cout << (a == b) << std::endl;
}

int main() {
  f();
/*
  while (true) {
    try {
      f();
    } catch (std::bad_alloc) {
        std::cout << "配列のnewに失敗しました" << std::endl;
        return -1;
    }
  }
*/
}