#include <iostream>

int main() {
  int x;

  std::cout << "正の整数値を逆から出力" << std::endl;

  do {
    std::cout << "正の整数: ";
    std::cin >> x;
  } while (x < 0);

  std::cout << "逆から読むと: ";
  while(x > 0) {
    std::cout << (x % 10);
    x /= 10;
  }
  std::cout << '\n';
}