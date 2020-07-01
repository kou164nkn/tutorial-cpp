#include "window.hpp"
#include "moc_window.hpp"

#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) :
QWidget(parent){
  // Set size of the window
  setFixedSize(100, 50);

  // Create and position the button
  button_ = new QPushButton("button", this);
  button_->setGeometry(10, 10, 80, 30);

  // ボタンが押された時にWindowクラスのchange_text()が呼ばれる
  connect(button_,
          SIGNAL(clicked()),
          this,
          SLOT(change_text()));
}

void Window::change_text() {
  button_->setText("clicked")
}