#include <iostream>

int main() {
  int n;

  do {
    std::cout << "＊を入力した数字分だけ出力します: ";
    std::cin >> n;
  } while (n < 0);

  for(int i = 0; i < n; i++) {
    std::cout << '*';
  }
  std::cout << std::endl;
}