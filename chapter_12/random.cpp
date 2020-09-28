#include <cstdlib>
#include <iostream>
#include <random>

bool confirm_retry() {
  int retry;
  do {
    std::cout << "もう一度？ y=1, n=0: ";
    std::cin >> retry;
  } while (retry != 0 && retry != 1);
  return static_cast<bool>(retry);
}

int main() {
  std::random_device seed_gen;
  std::mt19937 engine{seed_gen()};
  std::uniform_int_distribution<> dist{100, 999};

  do {
    int x = dist(engine);
    int y = dist(engine);
    int z = dist(engine);

    for (;;) {
      std::cout << x << "+" << y << "+" << z << "=";
      int k;
      std::cin >> k;
      if (k == x + y + z) {
        break;
      }
      std::cout << "不正解！" << std::endl;
    }
  } while (confirm_retry());
}