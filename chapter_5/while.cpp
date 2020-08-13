#include <iostream>

int main() {
  int x;

  do {
    std::cout << "整数値を入力してください: ";
    std::cin >> x;
  } while (x <= 0);

  while (x >= 0) {
    std::cout << x << std::endl;
    --x;
    // --x -> 前置デクリメント: xの現在の値を1減らし、引いた後の値を左辺参照で返す
    // x-- -> 後置デクリメント: xの現在の値を1減らし、減らす前の値を右辺値で返す

    /*
      下記のようにも記述できる
      std::cout << x-- << std::endl;
    */
  }
}
