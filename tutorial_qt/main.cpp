#include <QApplication>
#include <QPushButton>

#include "window.hpp"

int main(int argc, char **argv)
{
  // Qtのアプリケーションを作成
  QApplication app (argc, argv);

  // Windowクラスからインスタンスを生成
  Window window;

  window.show();
  return app.exec();
}