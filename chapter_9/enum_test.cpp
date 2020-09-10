#include <iostream>
#include <string>

struct Node;

struct Token {
  enum Kind {
    kId,
    kIf,
    kFor,
    kWhile,
  } kind;

  /*
    union => 共用体 構造体のようにメンバ変数を持てるが、全てのメンバが同じメモリを共有するので
                   「複数の型のうちどれか1つとして使う」を実現するために用いられる
  */
  union {
    struct {
      const char* loc;
      unsigned int len;
    } id;
    Node* cond;
  } value;
};

const char* src = "foo bar hoge";
int main() {
  Token t{Token::kId, {}};
  t.value.id.loc = &src[4];
  t.value.id.len = 3;

  std::cout << t.kind << std::endl;
  std::cout << std::string(t.value.id.loc, t.value.id.len) << std::endl;
}