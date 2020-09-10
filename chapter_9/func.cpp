#include <functional>
#include <iostream>

int add(int a, int b) {
  return a + b;
}

int main() {
  int (*f)(int, int); // 関数ポインタ
  f = add;
  std::cout << f(3, 4) << std::endl;

  f = [](int a, int b) {
    return a * b;
  };
  std::cout << f(3, 4) << std::endl;

  std::function<int (int, int)> g;
  g = [&](int a, int b) {
    return a - b;
  };
  std::cout << g(3, 4) << std::endl;
}