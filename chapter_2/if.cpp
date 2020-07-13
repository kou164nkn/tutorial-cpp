#include <iostream>

int main() {
  int n{1};

  /*
    型 <変数名>{} による初期化
    下の2つを区別したかった
    std::vector<int> f(); 関数の宣言
    std::vector<int> f{}; 変数の宣言
  */

  std::cout << "n: ";
  std::cin >> n;

  /*
    bool c{c > 0}; // false(偽) or true(真)

    if (c) {
      std::cout << "n (" << n << ") は正です" << std::endl;
    } else {
      std::cout << "n (" << n << ") は 0 または負です" << std::endl;
    }
  */

  // else ifというパーツがあるのではなく if else　の組み合わせでできている
  if (n > 0) {
    std::cout << "n (" << n << ") は正です" << std::endl;
  } else if (n == 0) {
    std::cout << "n (" << n << ") は0です" << std::endl;
  } else {
    std::cout << "n (" << n << ") は負です" << std::endl;
  }
}