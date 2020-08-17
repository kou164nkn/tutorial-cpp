#include <iomanip> // std::setw()
#include <iostream>

int main () {
  int n;
  std::cout << "整数を何個加算しますか：";
  std::cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    int t;
    std::cout << "整数 (0で終了)：";
    std::cin >> t;

    if (t < 0) {
      std::cout << "負の値は加算しません" << std::endl;
      // goto fin_loop; // fin_loopまで移動 (多重ループを全て終了させることも可能)
      continue; // 次のループに行く (下3行は実行しない)
    }
    if (t == 0) break;
    sum += t;
  }

// fin_loop: // goto文のラベル
  std::cout << "total = " << sum << std::endl;
}