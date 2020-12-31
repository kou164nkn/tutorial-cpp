#include <iostream>
// # include <algorithm>

int seq_search(int *p, int n, int key) {
  for (int i = 0; i < n; ++i) {
    if (*p++ == key) {
      return i;
    }
  }
  return -1;
}

int main() {
  int x[5] = {1, 42, 3, 4, 5};

  int i = seq_search(x, 5, 42);

  /* algorithmパッケージを使えば線形探索を自分で実装する必要がなくなる
  int* it = std::find(x, x + 5, 4) // std::find(begin, end, target) 見つけた場所のポインタ

  std::cout << it - x << std::endl; 見つけた場所のポインタからxのポインタ(始点)を引けば要素で表示できる
  */

  std::cout << i << std::endl;
}