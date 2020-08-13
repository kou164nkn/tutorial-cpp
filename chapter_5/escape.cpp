#include <iostream>

int main() {
  // ANSIエスケープシーケンス

  /*
    "\x"の後ろに2桁の16進数を入力するとASCIIコードでその番号を入力したのと等価となる
    エスケープ文字などの制御文字は直接書くと見えないのでこの方法で書くことが多い
  */

  // 例: 色番号 30m ~ 37m でターミナル文字の色を変えることができる
  for (int color = 0; color <= 7; ++color) {
    std::cout << "\x1b[" << (30 + color) << "mABCDEFG" << std::endl;
  }

  // 例: カーソルを1行上に移動する => "\x1b[1A"
  for (int color = 0; color <= 7; ++color) {
    std::cout << "\x1b[" << (30 + color) << "m*";
    std::cout << "\x1b[1A";
  }
  // 例: カーソルを1行下に移動する => "\x1b[1B"
  for (int color = 0; color <= 7; ++color) {
    std::cout << "\x1b[" << (30 + color) << "m*";
    std::cout << "\x1b[1B";
  }

  /*
   色が変わりながら、こんな感じになる
    ABCDEFG* *
    ABCDEF*   *
    ABCDE*G    *
    ABCD*FG     *
    ABC*EFG      *
    AB*DEFG       *
    A*CDEFG        *
  */

  // 備忘：37mが文字色白
  std::cout << "\x1b[37mCOLOR_RESET" << std::endl;
}