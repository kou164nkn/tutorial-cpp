#include <iostream>
#include <cctype>
#include <limits>

int main() {
  for (char c = 0; ; ++c) {
    switch (c) {
      case '\a': std::cout << "\\a"; break;
      case '\b': std::cout << "\\b"; break;
      case '\f': std::cout << "\\f"; break;
      case '\n': std::cout << "\\n"; break;
      case '\r': std::cout << "\\r"; break;
      case '\t': std::cout << "\\t"; break;
      case '\v': std::cout << "\\v"; break;
      default: std::cout << ' ' << (std::isprint(c) ? c : ' '); // isprint() 表示文字か否か確認
    }

    std::cout << ' ' << std::hex << int(c) << std::endl;

    if (c == std::numeric_limits<char>::max()) {
      break;
    }
  }

  /*
  char c = '1';
  // int(c)で'1'の文字コードを出力
  // char c = 49 と同じ
  std::cout << c << " " << int(c) << std::endl;
  */
}