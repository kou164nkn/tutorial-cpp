#include <QApplication>
#include <QPushButton>

#include "window.hpp"

int main(int argc, char **argv)
{
  QApplication app (argc, argv);

  Window window;
  window.setFixedSize(300, 200);

  QPushButton *button = new QPushButton("Hello World", &window);
  button->setGeometry(10, 10, 120, 50);

  window.show();
  return app.exec();
}