#include <iomanip> // std::setw()
#include <iostream>

int main () {
  for (int i = 1; i <= 9; ++i) {
    for (int j = 1; j <= 9; ++j) {
      // std:::setw(3) で i * j の結果を3桁で表示する
      std::cout << std::setw(3) << i * j;
    }
    std::cout << std::endl;
  }

  for (int i = 1; i <= 9; ++i) {
    for (int j = 1; j <= i; j++) {
      // std:::setw(3) で i * j の結果を3桁で表示する
      std::cout << '*';
    }
    std::cout << std::endl;
  }

  for (int i = 1; i <= 9; ++i) {
    for (int j = 1; j <= 9 - i; ++j) {
      std::cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      // std:::setw(3) で i * j の結果を3桁で表示する
      std::cout << '*';
    }
    std::cout << std::endl;
  }
}