#include <iostream>

void f(int* p) {
  delete p;
}

int main() {
  int* x = new int{5}; // 動的記憶域期間
  std::cout << *x << std::endl;

  int flag;
  std::cin >> flag;

  if (flag) {
    f(x);
  }
  std::cout << *x << std::endl;

  // 配列版
  int* y = new int[5]{3, 5, 7, 9, 10};
  std::cout << *y << std::endl;
  std::cout << y[2] << std::endl;
  std::cout << y[4] << std::endl;

  delete[] y;
}