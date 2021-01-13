#include <iostream>

// voidポインタと似たような振る舞いを持つものとして any クラスがある
// 値を取り出す際に any_cast を行って間違った型である場合は
// エラーを発生させることができるので, anyクラスを使った方が良いとされる

int main() {
  int i = 42;
  int* pi = &i;

  // ポインタであるのは分かるが何型を指すかはわからない
  void* pv       = pi;
  // 何型を指すかはわからないが何らかのアドレスが得られる
  uintptr_t addr = reinterpret_cast<uintptr_t>(pi);

  // 値は同じ
  std::cout << "pi = " << pi << std::endl;
  std::cout << "pv = " << pv << std::endl;

  // intポインタ型の変数をvoidポインタ型の値で初期化はできない（要キャスト)
  int* a = reinterpret_cast<int*>(pv);
  std::cout << "*a = " << *a << std::endl;
}