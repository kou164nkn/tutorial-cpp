#include <array>
#include <iostream>
#include <random>

int main() {
  std::random_device seed_gen;
  std::mt19937 engine{seed_gen()};
  std::uniform_int_distribution<> dist{0, 99};

  std::array<int, 7> arr;
  for (std::size_t i = 0; i < arr.size(); ++i) {
    arr[i] = dist(engine);
    std::cout << "a[" << i << "]" << arr[i] << std::endl;
  }

  std::cout << "=== reverse ===" << std::endl;

  for (std::size_t i = 0; i < arr.size() / 2; ++i) {
    std::swap(arr[i], arr[arr.size() - i - 1]);
  }
  for (std::size_t i = 0; i < arr.size(); ++i) {
    std::cout << "a[" << i << "]" << arr[i] << std::endl;
  }
}