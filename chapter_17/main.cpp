#include <iostream>

int main() {
  int array[10] = {1, 2, 3, 4, 5, 6, 7};
  int *p = &array[3];

  for(int i = 0; i < 7; ++i) {
    std::cout << p[i] << std::endl;
    std::cout << *(p + i) << std::endl;
    // *(p + i) は array[i + 3] のエイリアス
  }

  // int型のポインタが +1 されると4バイトずれる (ずれ幅はポインタが指してる変数型に依存)
  std::cout << (uintptr_t)(p - 1) << std::endl;
  std::cout << (uintptr_t)(p + 0) << std::endl;
  std::cout << (uintptr_t)(p + 1) << std::endl;
  std::cout << (uintptr_t)(p + 2) << std::endl;
}