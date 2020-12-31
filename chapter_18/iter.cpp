#include <iostream>

void fill_zero(int* p, int n) {
  while(n-- > 0) {
    *p = 0; // *: 間接演算子
    p++;
  }
}

int main() {
  int x[5] = {1, 2, 3, 4, 5};

  fill_zero(x + 1, 2);

  for (int i = 0; i < 5; ++i) {
    std::cout << "x[" << i << "]: " << x[i] << std::endl;
  }
}