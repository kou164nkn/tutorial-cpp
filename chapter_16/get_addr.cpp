#include <iostream>

// library
static int gx; // 内部変数

int* get_addr() {
  return &gx;
}

int get_addr2(int** p) {
  *p = &gx;
  return 0; // 0 == success
}
// end of library


// ちなみに、これだと引数のポインタが変わるだけで main()の変数p には影響を与えられない
/*
int get_addr2(int* p) {
  p = &gx;
  return 0; // 0 == success
}
*/


int main() {
  int* p = nullptr;
  int status = get_addr2(&p);
  if (status != 0) {
    std::cout << "failed to get address" << std::endl;
    return 1;
  }

  std::cout << get_addr() << std::endl;
  std::cout << p << std::endl;
}