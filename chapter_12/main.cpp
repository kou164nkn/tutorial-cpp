#include <iostream>

void put_chars(char c, int n) {
  while (n-- > 0) {
    std::cout << c; // 副作用(値は返さずに環境に影響を与える)
  }
}

void put_square(char c, int n) {
  for (int i = 0; i < n; ++i) {
    put_chars(c, n);
    std::cout << std::endl;
  }
}

int add(int a, int b) {
  return a + b; //　作用(入力して出力)
}

int main() {
  int n;
  std::cout << "段数: ";
  std::cin >> n;

  for(int i = 1; i <= n; ++i) {
    put_chars('*', i);
    std::cout << std::endl;
  }

  std::cout << "--------" << std::endl;

  for(int i = 1; i <= n; ++i) {
    put_chars(' ', n - i);
    put_chars('*', i);
    std::cout << std::endl;
  }

  std::cout << "--------" << std::endl;

  put_square('@', n);
}