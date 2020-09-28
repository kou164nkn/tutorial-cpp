#include <iostream>

long collatz(long n) {
  if (n == 1) {
    return 1; // ループの中で副作用がない場合は計算せずに1を返すよう、コンパイラが最適化する
  }
  if (n%2) {
    return collatz(3*n+1);
  }
  return collatz(n/2);
}

int main() {
  int n;
  std::cout << "collatz m: ";
  std::cin >> n;
  std::cout << collatz(n) <<std::endl;
}