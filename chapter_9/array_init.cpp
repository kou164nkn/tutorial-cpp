#include <algorithm>
#include <array>
#include <iostream>

struct Value {
  int tag;
  int value;
};

int main() {
  std::array<Value, 3> arr{{
    {0, 3}, {1, 8}, {2, 1}
  }};

  // 構造体の値が8の要素数を返す
  int cnt = std::count_if(arr.begin(), arr.end(),
                          [](const Value& v){ return v.value == 8; });
  std::cout << cnt << std::endl;
}