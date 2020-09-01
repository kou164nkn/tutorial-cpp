#include <iostream>

int main() {
  int x, y;

  std::cout << "2つの整数の平均値を求めます";
  std::cin >> x >> y;

  // double ave = (x + y) / 2;  (int + int) / int の結果はint
  double ave = static_cast<double>(x + y) / 2.0;
  std::cout << "average = " << ave << std::endl;
}