#include <iostream>
#include <random>

const double kpi = 3.1415; // googleのCode Style Guideで定数の前にはkをつける

int main() {
  int x, y;

  /*
    x = 63;
    y = 18;

    int x{63}, y{18};
  */

  /*
  std::cout << "x: ";
  std::cin >> x; // extractor 抽出子
  std::cout << "y: ";
  std::cin >> y;
  */

  std::cout << "x y: ";
  std:cin >> x >> y;

  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "x + y = " << (x + y ) << std::endl;
  std::cout << "x - y = " << (x - y ) << std::endl;
  std::cout << "x * y = " << (x * y ) << std::endl;
  std::cout << "x / y = " << (x / y ) << std::endl;
  // std::cout << "x % y = " << (x % y ) << std::endl;
  std::cout << "-x = " << (-x) << std::endl;
  std::cout << "+x = " << x << std::endl;


  double r;
  std:: cout << "半径: ";
  std::cin >> r;

  std::cout << "円周 = " << ( 2 * kpi * r );
  std::cout << "円の面積 = " << ( kpi * r * r );


  // 乱数
  std::random_device seed_gen     // 乱数のシード値を設定;
  std:mt19937 engine{seed_gen()}; // 乱数生成器の作成
  std::uniform_int_distribution<> dist{0, 9}; // 0~9の一様分布の下で乱数を生成

  int lucky = dist(engine);

  std::cout << "ラッキーナンバー: " << lucky << std::endl;
}
