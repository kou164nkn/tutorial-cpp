#include <cctype>
#include <cstdint>
#include <limits>
#include <iostream>

int main() {
  std::cout << "char型の大きさ: "  << sizeof(char) << std::endl;
  std::cout << "short型の大きさ: " << sizeof(short) << std::endl;

  int i;
  std::cout << "int型の大きさ: "   << sizeof(int) << std::endl;
  std::cout << "変数iの大きさ: "   << sizeof(i) << std::endl;

  std::cout << "long型の大きさ: "  << sizeof(long) << std::endl;

  /*
  size_tはユーザ定義型
    typedef unsigned size_t;
    typedef 既存の型 別名;
    using 別名 = 既存の型;
  */
  size_t s = 42;
  std::cout << "size_t型の大きさ: " << sizeof(size_t) << std::endl;
  std::cout << "sizeof(size_t)型の大きさ: " << sizeof(sizeof(size_t)) << std::endl; // sizeofと同じ大きさ
  std::cout << "size_tの名前: " << typeid(size_t).name() << std::endl;
  std::cout << "sizeof(size_t)型の名前: " << typeid(sizeof(size_t)).name() << std::endl;
}