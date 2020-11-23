#include <iostream>
#include <stdint.h>

void reverse(int a[], int n) { // int a[] で aのポインタを受け取る
// void reverse(int* a, int n) { とやってることは同じ
  for(int i = 0; i < n / 2; ++i) {
    std::swap(a[i], a[n-i-1]);
  }
}

int main() {
  constexpr int N = 5;
  int c[N] = { 3, 5, 7, 10, 2 };

  reverse(c, N);

  for(int i = 0; i < N; ++i) {
    std::cout << c[i] << std::endl;
  }
}

/*
array を使った場合

#include <array>
#include <iostream>
#include <stdint.h>

template <size_t N>
void reverse(std::array<int, N>& a) { // 型の一部に配列の要素数を含んでいるため, 直接Nを渡す必要はない
  for(int i = 0; i < N / 2; ++i) {
    std::swap(a[i], a[N-i-1]);
  }
}

int main() {
  constexpr int N = 5;
  std::array<int, N> c = { 3, 5, 7, 10, 9 };

  reverse(c);

  for(int i = 0; i < N; ++i) {
    std::cout << c[i] << std::endl;
  }
}
*/