#include <iostream>
#include <string>

int main() {
  int array[10];
  int* p = &array[1];
  int* q = &array[5];

  std::cout << (p == q) << std::endl;
  std::cout << (p < q) << std::endl;
  std::cout << (p > q) << std::endl;

  // c と　文字列リテラル ”hello, world" のアドレスの比較
  const char c[] = "hello, world";
  std::cout << (+c == +"hello, world") << std::endl; // => (0) false

  // 文字列どうしの比較
  std::string s = "hello, world";
  std::cout << (s == "hello, world") << std::endl; // => (1) true
}