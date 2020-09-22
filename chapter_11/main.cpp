#include <array>
#include <iostream>

int max3(int a, int b, int c) {
  int max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  return max;
}

int main() {
  // ラムダ式による関数定義も可能
  auto lmax3 = [](int a, int b, int c) {
    int max = a;
    if (b > max) {
      max = b;
    }
    if (c > max) {
      max = c;
    }
    return max;
  };

  std::array<int , 3> math, eng;
  for(std::size_t i = 0; i < math.size(); ++i) {
    std::cout << "[" << i << "]" << std::endl;
    std::cout << "math: ";
    std::cin >> math[i];
    std::cout << "eng: ";
    std::cin >> eng[i];
  }

  // int max_math = max3(math[0], math[1], math[2]);
  // int max_eng  = max3(eng[0], eng[1], eng[2]);
  int max_math = lmax3(math[0], math[1], math[2]);
  int max_eng  = lmax3(eng[0], eng[1], eng[2]);

  /*
  int max_math = math[0];
  if (math[1] > max_math) {
    max_math = math[1];
  }
  if (math[2] > max_math) {
    max_math = math[2];
  }

  int max_eng = eng[0];
  if (eng[1] > max_eng) {
    max_eng = eng[1];
  }
  if (eng[2] > max_eng) {
    max_eng = eng[2];
  }
  */

  std::cout << "the highest math score is "  << max_math << std::endl;
  std::cout << "the highest english score is "  << max_eng << std::endl;
}