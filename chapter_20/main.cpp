#include <cstring>
#include <iostream>

int main() {
  char s[4] = "abc";

  std::cout << "'" << s << "'" << std::endl;
  std::cout << sizeof(s) << std::endl;
  // => 4 (NULL文字を含んだバイト数になる)

  std::strcpy(s, "d"); // 第二引数を先頭から順に見ていってNULL文字までを変数sにコピーする
  std::cout << "'" << s << "'" <<std::endl;
  // => 'd'
  std::cout << sizeof(s) <<std::endl;
  // => 4 (sizeofの値はコンパイル時に決定する)

  std::strcpy(s, "eeeeeeeeeeeeeeee");
  std::cout << "'" << s << "'" << std::endl;
  // => 'eeeeeeeeeeeeeeee'
  std::cout << sizeof(s) << std::endl;
  // => 4 Segmentation fault (変数sのメモリ範囲を越えてreturn_addrなどの関数実行に重要なメモリ部分を汚染している)
}