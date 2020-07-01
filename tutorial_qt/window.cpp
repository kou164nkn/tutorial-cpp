#include "window.hpp"

#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) :
QWidget(parent){
  // Set size of the window
  setFixedSize(100, 50);

  // Create and position the button
  button_ = new QPushButton("2nd button", this);
  button_->setGeometry(10, 10, 80, 30);

  connect(button_,
          SIGNAL(clicked()),
          QApplication::instance(),
          SLOT(quit()));
}