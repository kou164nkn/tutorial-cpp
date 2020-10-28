#include <iostream>

/*
fx sx ax
1 1 1
2 2 1
3 3 1
4 4 1
5 5 1
6 6 1
7 7 1
8 8 1
*/

int fx = 0;

void func() {
  static int sx = 0; // 初期化されるとプログラム終了時まで記憶され続けるので 1 ずつ値が増える
  int ax = 0;

  fx++;
  sx++;
  ax++;

  std::cout << fx << " " << sx << " " << ax << std::endl;
}

int main() {
  std::cout << "fx sx ax" << std::endl;
  for(int i = 0; i < 8; ++i) {
    func();
  }
}