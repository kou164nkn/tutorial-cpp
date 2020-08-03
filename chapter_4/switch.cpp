#include <iostream>

int main() {
  int hand;

  do {
    std::cout << "手を選んでね (0:グー, 1:チョキ, 2:パー) " << std::endl;
    std::cin >> hand;
  } while (hand < 0 || 2 < hand);

  switch (hand) {
  case 0:
    std::cout << "グー" << std::endl;
    break;
  case 1:
    std::cout << "チョキ" << std::endl;
    break;
  case 2:
    std::cout << "パー" << std::endl;
    break;
  default:
    std::cout << "分からない数字でした" << std::endl;
  }

  std::cout << "switch文が終わりました" << std::endl;
}