#include <iostream>

int main() {
  float sum = 0;
  for(float f = 0; f <= 1; f += 0.001) {
    sum += f;
  }
  std::cout << sum << std::endl;
}