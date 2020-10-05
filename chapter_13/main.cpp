#include <iostream>

void alerts(int n = 3) {
  while (n-- > 0) {
    // nの値ぶんだけアラームを鳴らす
    std::cout << '\a';
  }
}

int main() {
  alerts();
  std::cout << "警報!\n";

  alerts(5);
  std::cout << "警報!\n";
}