#include <iostream>
// 静的記憶域期間 プログラム実行中は生存(暗黙的に 0 で初期化)
// 自動記憶域期間 変数が存在するブロック実行中は生存

int fx; //静的記憶域期間 (グローバル変数)

int main() {
  static int sx; // 静的記憶域期間
  int ax = 3; // 自動記憶域期間 (スタック変数)

  std::cout << "fx = " << fx << std::endl;
  std::cout << "sx = " << sx << std::endl;
  std::cout << "ax = " << ax <<std::endl;
}