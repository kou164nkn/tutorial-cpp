#include <iostream>

/*
x = 75
x = 999
x = 0
x = 11
x = 22
x = 33
x = 44
x = 999
::x = 75
x = 75
*/

int x = 75; // ファイル有効範囲 (グローバル変数)

void print_x() {
  std::cout << "x = " << x << std::endl;
}

void change_x(int v);

int main() {
  std::cout << "x = " << x << std::endl;

  int x = 999; // ブロック有効範囲
  std::cout << "x = " << x << std::endl;

  for(int i = 0; i < 5 ; ++i) {
    int x = i * 11; // ブロック有効範囲
    std::cout << "x = " << x << std::endl;
  }

  std::cout << "x = " << x << std::endl;
  std::cout << "::x = " << ::x << std::endl; // :: でグローバル名前空間を参照

  print_x();

  // extern を使うことで change_x.cpp からでもグローバル変数を R/W できることを確認
  // extern で参照させないようにするには下記のように無名名前空間で囲む必要がある
  /*
    namespace {
      int x = 75; // ファイル有効範囲 (グローバル変数)
    }
  */
  change_x(4);
  std::cout << "::x = " << ::x << std::endl;
}