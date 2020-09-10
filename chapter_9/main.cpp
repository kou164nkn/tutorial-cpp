#include <iostream>

enum Animal {
  Dog, // 列挙子
  Cat,
  Monkey,
  Invalid,
};

int main() {
  int type;

  do {
    std::cout << "0: 犬  1: 猫  2: 猿  3: 終了" << std::endl;
    std::cin >> type;
  } while (type < Dog);
  if (type != Invalid) {
    Animal selected{static_cast<Animal>(type)};
    switch (selected) {
    case Dog:
      std::cout << "わんわん" << std::endl;
      break;
    case Cat:
      std::cout << "にゃーお" << std::endl;
      break;
    case Monkey:
      std::cout << "きっきっ" << std::endl;
      break;
    default:
      std::cout << "よくわからない動物: " << selected << std::endl;
      break;
    }
  }
}


// C++11から enum class を定義できるようになった

// enum class => enumのように使えるが整数への暗黙変換は拒否され、enum a { a::b }とする必要がある

// 上のコードを enum class で書いてみる
/*
enum class Animal {
  Dog, // 列挙子
  Cat,
  Monkey,
  Invalid,
};

int main() {
  int type;

  do {
    std::cout << "0: 犬  1: 猫  2: 猿  3: 終了" << std::endl;
    std::cin >> type;
  } while (type < static_cast<int>Animal::Dog>);
  if (type != static_cast<int>Animal::Invalid) {
    Animal selected{static_cast<Animal>(type)};
    switch (selected) {
    case Animal::Dog:
      std::cout << "わんわん" << std::endl;
      break;
    case Animal::Cat:
      std::cout << "にゃーお" << std::endl;
      break;
    case Animal::Monkey:
      std::cout << "きっきっ" << std::endl;
      break;
    default:
      std::cout << "よくわからない動物: " << selected << std::endl;
      break;
    }
  }
}
*/