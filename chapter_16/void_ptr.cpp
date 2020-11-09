#include <iostream>

int main() {
  int arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
  void* p = &arr[5]; // voidポインタ : アドレスを指す能力はあるが, ポインタ先の型は不明
  std::cout << *(int*)p << std::endl;       // 参照外しをする際はする必要がある
  std::cout << *((int*)p + 2) << std::endl;
  std::cout << *((int*)p - 2) << std::endl;
}