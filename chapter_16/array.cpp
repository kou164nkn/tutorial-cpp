#include <iostream>

int main() {
  int arr[3];
  // arr と &arr[0] の値自体は同じ
  std::cout << arr << std::endl;
  std::cout << &arr[0] << std::endl;
  std::cout << typeid(arr).name()     << std::endl; // arr全体の型
  std::cout << typeid(&arr[0]).name() << std::endl; // arrの最初の要素のポインタの型

  int arr2[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
  int* p = &arr2[5];
  std::cout << *p << std::endl;       // => 60
  std::cout << *(p + 2) << std::endl; // => 80
  std::cout << *(p - 2) << std::endl; // => 40
  std::cout << p[0] << std::endl;     // => 60
  std::cout << p[2] << std::endl;     // => 80
  std::cout << p[-2] << std::endl;    // => 40

  int i = 3;
  std::cout << p[i] << std::endl; // (糖衣構文) => 90
  std::cout << *(p + i) << std::endl;       // => 90
  std::cout << *(i + p) << std::endl;       // => 90
  std::cout << i[p] << std::endl;           // => 90

  p = &arr2[0];
  for(int i = 0; i < 10; ++i) {
    *p++ = 3 * i;
  }
  for (int i = 0; i < 10; ++i) {
    std::cout << "arr[" << i << "] = " << arr2[i] << std::endl;
  }
}