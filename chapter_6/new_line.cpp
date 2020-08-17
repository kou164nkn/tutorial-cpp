#include <iostream>

int main() {
  std::cout << "new line \n"; // カーソルは次の行のその場所に移動する e.g) L11:102 -> L12:102
  std::cout << "new line \r"; // カーソルはその行の先頭に移動する e.g) L11:24 -> L11:1

  // \n と \r の2つを組み合わせるとカーソルが次の行の先頭に移動できる (タイプライター的考え)

  // 改行文字
  //   Linux   LF (Line Feed)
  //   Mac     CR (Carriage Return)
  //   Windows CRLF
  //
  // CR = \n, LF = \r
}