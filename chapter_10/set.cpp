#include <iostream>
#include <set>

int main() {
  std::set<int> s{2, 5, 1, 7};
  for(int x : s) {
    std::cout << x << ' ';
  }
  std::cout << std::endl; // => 1 2 5 7

  s.insert(10);
  for(int x : s) {
    std::cout << x << ' ';
  }
  std::cout << std::endl; // => 1 2 4 5 7

  s.insert(5); // すでに存在するので追加されない
  for(int x : s) {
    std::cout << x << ' ';
  }
  std::cout << std::endl; // => 1 2 5 7 10

  s.insert(4); // ソートされた位置に追加
  for(int x : s) {
    std::cout << x << ' ';
  }
  std::cout << std::endl; // => 1 2 4 5 7 10

  // 降順にソートされる集合体
  std::set<int, std::greater<int>> s2{2, 5, 1, 7}; // ラムダ式で比較に用いる関数を指定できる
  for(int x : s2) {
    std::cout << x << ' ';
  }
  std::cout << std::endl; // => 7 5 2 1
}