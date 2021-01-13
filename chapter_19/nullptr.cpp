#include <new>
#include <cstdint>
#include <iostream>

int main() {
  while(true) {
    double* a = new(std::nothrow) double[0xffffffff];
    std::cout << "allocate = " << a << std::endl;

    if (a == nullptr) {
      std::cout << "failed to allocate" << std::endl;
      return -1;
    }
  }
}