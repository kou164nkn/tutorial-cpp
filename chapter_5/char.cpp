#include <iostream>

int main() {
  char c = 'a';
  int i = 0;

  while (i < 26) {
    std::cout << c;
    ++c;
    ++i;

    /*
      std::cout << (c + i);
      ++i
      とすると a ~ z のASCIIコード 97 ~ 122 が出力される

      std::cout << static_cast<char>(c + i);
      とすれば a ~ z が出力される
    */
  }
  std::cout << '\n';
}