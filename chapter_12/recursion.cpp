#include <iostream>

long factorial(long n) {
  if (n <= 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int n;
  std::cout << "n! n: ";
  std::cin >> n;
  std::cout << factorial(n) << std::endl;
}