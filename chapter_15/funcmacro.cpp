#include <iostream>

#define sqr(x) ((x) * (x))
#define sss(x) (#x) // # で受け取ったパラメータを文字列化する

// デバッグ用マクロ
// ... で可変数個のパラメータを受け取り __VA_ARGS__ でパラメータを使用する
#define dbg(...) std::cout << #__VA_ARGS__ << " = " << [&]{ return __VA_ARGS__; }() <<std::endl;

int main() {
  std::cout << sqr(4) << std::endl;    // => 16
  std::cout << sss(abcd) << std::endl; // => "abcd"
  dbg(3 * 4);
}