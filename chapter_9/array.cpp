#include <array>
#include <iostream>
#include <numeric>

int main() {
  std::array<int, 5> score;
  int sum{0};

  std::cout << score.size() << "人の点数の合計点と平均点を求めます" << std::endl;
  for (int i = 0; i < score.size(); i++ ) {
    std::cout << (i + 1) << "番目の点数: ";
    std::cin >> score[i];
    // sum += score[i];
  }
  sum = std::accumulate(score.begin(), score.end(), 0);

  std::cout << "合計は" << sum << std::endl;
  std::cout << "平均は" << static_cast<double>(sum) / score.size() << std::endl;

  for (int x : score) {
    std::cout << x << std::endl;
  }
}