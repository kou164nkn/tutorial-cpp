#include <iostream>

// よく使われるテクニックとして
// 戻り値でステータスコードを渡し, 意味のある戻り値はポインタで渡す

void f(int* a, int b) {
  // a, b は値渡し
  *a = *a + b;
  // a はポインタの値渡し. 参照渡しではない
}

void f_ref(int& a, int b) {
  // a は参照渡し
  // b は値渡し
  a = a + b;
}

int main() {
  int a = 42, b = 5;

  f(&a, b);
  std::cout << a << std::endl;
}