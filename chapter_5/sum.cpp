#include <iostream>

int main() {
  int n;
  int sum = 0;

  std::cin >> n;

  int i = 1;
  while(i <= n) {
    sum += i;
    ++i;
  }
  std::cout << sum << std::endl;
}