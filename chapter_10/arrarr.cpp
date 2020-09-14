#include <array>
#include <iomanip>
#include <iostream>

int main() {
  std::array<std::array<int, 4>, 3> arr; // 多次元配列

  /*
      --------------->x
    | {int, int, int},
    | {int, int, int}
    y
  */

  for (std::size_t y = 0; y < arr.size(); ++y) {
    for (std::size_t x = 0; x < arr[y].size(); ++x) {
      arr[y][x] = 10 * y + x;
    }
  }

  for (std::size_t y = 0; y < arr.size(); ++y) {
    std::cout << "a[" << y << "]:";
    for (std::size_t x = 0; x < arr[y].size(); ++x) {
      std::cout << ' ' << std::setw(2) << arr[y][x];
    }
    std::cout << std::endl;
  }
}