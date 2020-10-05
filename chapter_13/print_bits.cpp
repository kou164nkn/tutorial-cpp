#include <array>
#include <bit>
#include <charconv>
#include <iostream>

/*
int count_bits(unsigned x) { // xのbit数を数える
  int bits = 0;
  while (x) {
    if (x & 1U) ++bits;
    x >>= 1; // xを1bitずつ右にずらす
  }
  return bits;
}
*/

int count_bits(unsigned x) {
  return std::popcount(x);
}

int int_bits() {
  return count_bits(~0U); // unsigned_int型のbit数を調べる(0をbit反転してから1の数を数える)
}

void print_bits(unsigned x) {
  for (int i = int_bits() - 1; i >= 0; --i) {
    std::cout << ((x >> i) & 1U ? '1' : '0'); // 三項演算子(とあるbit部が1なら1を表示)
  }
}

// 入力した数値や演算結果のビット表示
int main() {
  unsigned a, b;
  std::cin >> a >> b;

  std::cout << "a     = ";
  print_bits(a);
  std::cout << std::endl;

  std::cout << "b     = ";
  print_bits(b);
  std::cout << std::endl;

  std::cout << "a & b = ";
  print_bits(a & b);
  std::cout << std::endl;

  std::cout << "a | b = ";
  print_bits(a | b);
  std::cout << std::endl;

  std::cout << "a ^ b = ";
  print_bits(a ^ b);
  std::cout << std::endl;

  std::cout << "~a    = ";
  print_bits(~a);
  std::cout << std::endl;

  std::cout << "~b    = ";
  print_bits(~b);
  std::cout << std::endl;

  std::cout << "a >> b= ";
  print_bits(a >> b);
  std::cout << std::endl;

  std::cout << "b >> a= ";
  print_bits(b >> a);
  std::cout << std::endl;

  std::array<char, 33> buf;
  std::to_chars(buf.begin(), buf.end(), 0xff0a, 2);
  buf[32] = '\0';
  std::cout << buf.begin() << std::endl;
}