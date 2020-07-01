#pragma once

#include <QWidget>

class QPushButton;
class Window : public QWidget{
  Q_OBJECT
  public:
   explicit Window(QWidget *parent = nullptr);
  private slots:
   void change_text();
  private:
   QPushButton* button_;
};