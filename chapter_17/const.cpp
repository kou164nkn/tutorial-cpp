#include <iostream>

// const : constant 定数
int maxof(const int a[], int n) { // const がつくことで書き換え不可なポインタとなる
  int m = a[0];
  for (int i = 0; i < n; ++i) {
    if (m < a[i]) {
      m = a[i];
    }
  }
  return m;
}

int main() {
  int array[5] = { 10, 20, 4, 50, 3 };
  std::cout << maxof(array, 5) << std::endl; // => 50

  const int* p = &array[0]; // p が指す先が書き込み不可
  int* const q = &array[0]; // q 自身が書き込み不可
}