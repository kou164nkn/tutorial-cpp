# C++入門

## 開発環境作成(Ubuntu)

```
$ sudo apt update && sudo apt install clang-10
$ clang++-10 -v
```

## コンパイル&実行

```
$ clang++-10 hello.cpp
$ ./a.out
```

## 逆アセンブル

```
$ objdump -d -M intel -C a.out
```
