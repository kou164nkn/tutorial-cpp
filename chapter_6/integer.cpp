#include <iostream>
#include <limits>
#include <cstdint>

int main() {
  /*
    unsigned int z; // 0, 1, 2, ....
    signed int y; // ..., -2, -1, 0, 1, 2, ...
    int x; // = signed int
  */

  // int: -32768, 32767 (規格: 最低でもこの範囲は扱えることが保証されている)
  // int: -2147483648, 2147483647 (64bit向け 4byte型)

  std::cout << "int: "
    << std::numeric_limits<int>::min() << " ~ "
    << std::numeric_limits<int>::max() << std::endl;

  std::cout << "int8_t: "
    << int(std::numeric_limits<int8_t>::min()) << " ~ "
    << int(std::numeric_limits<int8_t>::max()) << std::endl;

  std::cout << "uint8_t: "
    << int(std::numeric_limits<uint8_t>::min()) << " ~ "
    << int(std::numeric_limits<uint8_t>::max()) << std::endl;

  std::cout << "int16_t: "
    << int(std::numeric_limits<int16_t>::min()) << " ~ "
    << int(std::numeric_limits<int16_t>::max()) << std::endl;

  std::cout << "uint16_t: "
    << int(std::numeric_limits<uint16_t>::min()) << " ~ "
    << int(std::numeric_limits<uint16_t>::max()) << std::endl;
}