# include <iostream>

int main() {
  int a, b;
  std::cout << "a b :";
  std::cin >> a >> b;

  /*
  int min;
  if (a < b) {
    min = a;
  } else {
    min = b;
  }
  */

  // 三項演算子
  //        条件式 ? 式1 : 式2
  int min = a < b ? a : b;

  std::cout << "min = " << min << std::endl;

  // std::cout << "min = " << (a < b ? a : b) << std::endl;
}