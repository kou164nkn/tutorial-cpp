#include <iostream>
#include <typeinfo>

int main() {
  const char* p = "abc"; // const char の配列
  // p[0] = d; はエラーになる

  std::cout << "\"ABC\"" << std::endl;
  std::cout << "type: " << typeid("ABC").name()
            << ", size: " << sizeof("ABC") << std::endl;

  std::cout << "\"\"" << std::endl;
  std::cout << "type: " << typeid("").name()
            << ", size: " << sizeof("") << std::endl;

  std::cout << "\"ABC\\0DEF\"" << std::endl; // R = raw string (エスケープ無しで使える)
  std::cout << "type: " << typeid("ABC\0DEF").name()
            << ", size: " << sizeof("ABC\0DEF") << std::endl;

  std::cout << "\"ABC\\0DEF\"" << std::endl;
  std::cout << R"("ABC\0DEF")" << std::endl; // R = raw string (エスケープ無しで使える)
  std::cout << R"foo("ABC\0DEF)")foo" << std::endl; // => "ABC\0DEF)" 　foo( が外側の括弧と評価される
}
