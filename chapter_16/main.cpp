#include <iostream>

int main() {
  int n = 135;
  std::cout << "n   : " <<  n << std::endl;
  std::cout << "&n  : " << &n << std::endl;

  int* ptr = &n;
  // int*, float* : ポインタが指す先の変数の型を指定している

  std::cout << "ptr : " <<  ptr << std::endl;
  std::cout << "*ptr: " << *ptr << std::endl;
  // *    : 間接演算子 (indirection)
  // *ptr : 参照外し (dereference)
}