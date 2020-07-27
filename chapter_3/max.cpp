#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int a, b, c;
  std::cout << "a b c: ";
  std::cin >> a >> b >> c;
  std::cout << "最大値は " << std::max({a, b, c}) << std::endl;
}