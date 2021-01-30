#include <iostream>
#include <cctype>

// const char* s ポインタ先は変更できないことを指す
void put_str(const char* s) {
  for (int i = 0; s[i] != '\0'; ++i) {
    std::cout << s[i];
  }
}

void toupper(const char* s) {
  for(int i = 0; s[i] != '\0'; ++i) {
    std::cout << static_cast<char>(std::toupper(s[i]));
  }
}

int main() {
  char str[10];

  std::cout << "Please input：";
  std::cin.getline(str, sizeof(str), '\n');
  put_str(str);
  std::cout << std::endl;
  toupper(str);
  std::cout << std::endl;
}