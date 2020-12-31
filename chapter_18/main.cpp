# include <iostream>

void PrintArray(int (*a)[2], int height) { // 多次元配列の横サイズは明示する必要がある
  for (int y = 0; y < height; ++y) {
    std::cout << "a[" << y << "]: ";
    for( int x = 0; x < 2; ++x) {
      std::cout << a[y][x] << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  int arr[5][2];

  for (int y = 0; y < 5; ++y) {
    for (int x = 0; x < 2; ++x) {
      arr[y][x] = (y + 1) * (x + 1);
    }
  }

  PrintArray(arr, 5);
}

/* 1次元配列にすると横サイズも自由に設定できる
void PrintArray(int *a, int width, int height) {
  for (int y = 0; y < height; ++y) {
    std::cout << "a[" << y << "]: ";
    for( int x = 0; x < width; ++x) {
      std::cout << a[y * width + x];
    }
    std::cout << std::endl;
  }
}

int main() {
  int arr[5 * width];

  for (int y = 0; y < 5; ++y) {
    for (int x = 0; x < width; ++x) {
      arr[y * width + x] = (y + 1) * (x + 1);
    }
  }

  PrintArray(arr, width, 5);
}
*/