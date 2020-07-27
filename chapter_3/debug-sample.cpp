#include <iostream>

int main() {
  int n;
  std::cout << "整数値: ";
  std::cin >> n;

  // print debug
  std::cout << "n == " << n << std::endl; // nに入っている値を確認

  if (n == 0) {
    std::cout << "その値は0です" << std::endl;
  } else if (-9 <= n && n <= 9) {
    std::cout << "-9 <= n == " << (-9 <= n) << std::endl; // -9 <= n の値(真偽)が出力
    std::cout << "n <= 9 == " << (n <= 9) << std::endl;   // m <= 9 の値(真偽)が出力
    std::cout << "その値は1桁です" << std::endl;
  } else {
    std::cout << "その値は2桁以上です" << std::endl;
  }


  /* gdb
    gdbをインストール
    `clang++-10 -Wall -Wextra -g main.cpp` で実行可能バイナリを作成
    `gdb ./a.out` で実行
    `break (省略形 b) main.cpp:7` でmain.cppの7行目にブレイクポイントを設置
    `run（省略形 r）` でデバッグモードを起動
    `info locals` でローカル変数を確認可能
    `continue（省略形 c）` でブレイクポイントから最後まで実行
  */
}