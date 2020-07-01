#pragma once

#include <QWidget>

class QPushButton;
class Window : public QWidget{
  public:
   explicit Window(QWidget *parent = nullptr);
  private:
   QPushButton* button_;
};