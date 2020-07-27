#include <iostream>

int main() {
  int n;
  std::cout << "整数値: ";
  std::cin >> n;


  if (n == 0) {
    std::cout << "その値は0です" << std::endl;
  } else if (n > -10 && n < 10) {  // 論理積
    std::cout << "その値は1桁です" << std::endl;
  } else {
    std::cout << "その値は2桁以上です" << std::endl;
  }

  /*
  if (n <= -10 || 10 <= n) { // 論理和
    std::cout << "その値は2桁以上です" << std::endl;
  } else {
    std::cout << "その値は2桁未満です" << std::endl;
  }
  */

  if (n <= -10 | 10 <= n) { // ビット和
  //   0 | 0 == 0
  //   0 | 1 == 1
  //   1 | 0 == 1
  //   1 | 1 == 1
  //   1101 | 0000 == 1101
  //   1010 | 1100 == 1110
    std::cout << "その値は2桁以上です" << std::endl;
  } else {
    std::cout << "その値は2桁未満です" << std::endl;
  }
}