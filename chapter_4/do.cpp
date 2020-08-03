#include <iostream>
#include <string>

int main() {
  std::string retry;

  do {
    int month;
    std::cout << "季節を求めます。何月？ : ";
    std::cin >> month;

    if (3 <= month && month <= 5) {
      std::cout << "春ですよー" << std::endl;
    } else if (6 <= month && month <= 8) {
      std::cout << "夏ですよー" << std::endl;
    } else if (9 <= month && month <= 11) {
      std::cout << "秋ですよー" << std::endl;
    } else if (month == 12 || month == 1 || month == 2) {
      std::cout << "冬ですよー" << std::endl;
    }

    std::cout << "もう一度？　Y/n : ";
    std::cin >> retry;
  } while (retry == "Y" || retry == "y");
}