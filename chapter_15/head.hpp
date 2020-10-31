// inline を書かずに clang++-10 -Wall -Wextra main.cpp a.cpp を実行すると
// リンク時に多重定義でエラーが吐かれるが
// inline を書くことで, コンパイラがどれか1つを採用すればよいと判断するのでエラーが発生しない
// このように現在はヘッダファイルに実体定義をするために inline を書く

inline int f(int a) {
  return a + 1;
}