#include <iostream>

int main() {
  char c;

  std::cout << "文字をn湯りょくしてください: ";
  std::cin >> c;

  std::cout << "c = " << c << std::endl;


  std::string s;

  std::cout << "お名前は？: ";
  // std:cin >> s; これでは空白を挟んだら後ろを拾ってくれない
  std::getline(std::cin s)

  std::cout << "こんにちは " << s << "さん!" << std::endl;
}