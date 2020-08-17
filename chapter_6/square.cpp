#include <iostream>

int main() {
  int n;
  std::cout << "面積 :";
  std::cin >> n;

  for (int i = 1; i < n; ++i) {
    // 指定した面積以上になる場合は探索は行わない
    if (i * i > n) break;

    if (n % i != 0) {
      continue;
    }
    std::cout << i << "x" << n /i << std::endl;
  }
}