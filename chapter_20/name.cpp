#include <cstring>
#include <iostream>
#include <string>

int main() {
  char name[4];
  std::cout << "お名前は：";
  std::cin.getline(name, sizeof(name), '\n');
  std::cout << "こんにちは " << name << " さん" << std::endl;


  // 普段使うにはこっちの方が良い
  std::string s;
  std::cout << "お名前は：";
  std::getline(std::cin, s);
  std::cout << "こんにちは " << s << " さん" << std::endl;
}