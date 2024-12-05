#include <iostream>
#include <memory>
using namespace std;

/* Hiding all unnecessary details and showing only the important parts*/  

/* Abstract classes are used to implement abstraction*/

/* Abstract classes serves as an interface for derived classes.They cannot be istantiated*/

class Shape {
public:  
  //pure virtual function
  virtual void draw() = 0;
};

class Circle : public Shape{
public:
  void draw () override { cout << "Drawing a circle" << endl;}
};

class Rectangle : public Shape{
public:
  void draw () override { cout << "Drawing a rectangle" << endl;}
};


int main() { 
  //using c++ smart pointers
  
  unique_ptr<Shape> circle = make_unique<Circle>();
  unique_ptr<Shape> rectangle = make_unique<Rectangle>();

  circle->draw();
  rectangle->draw();

  return 0;
}