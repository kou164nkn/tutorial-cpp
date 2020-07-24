#include <iostream>
#include <random>

int main() {
  std::random_device seed_gen;
  std::mt19937 engine{seed_gen()};
  std::uniform_int_distribution<> dist{1, 10};

  const int right = dist(engine);

  std::cout << "乱数あてクイズ! \n\n";
  std::cout << "=================\n";
  std::cout << "システムが乱数を生成します. 当ててください. \n";

  int answer;

  for (int i = 0; i < 10; i++) {
    std::cout << "乱数の値はなんでしょう？ (1 - 10): ";
    std::cin >> answer;

    if (right == answer) {
      std::cout << "正解！" << std::endl;
      std::cout << i+1 << "回目で正解しました." << std::endl;
      break;
    } else if (right < answer) {
      std::cout << "はずれ. 乱数はもっと小さい値です" << std::endl;
    } else if (right > answer) {
      std::cout << "はずれ. 乱数はもっと大きい値です" << std::endl;
    }
  }
}