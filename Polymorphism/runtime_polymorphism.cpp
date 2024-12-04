#include <iostream>
using namespace std;

/* Run time polymorphism is the type of polymorphism
  in the function or method that gets called is determined at runtime*/

class Parent {

public:
  void show_info() { cout << "I am parent's method" << endl;}  

  virtual void say_hello(){};
};

class Child : public Parent {
  
public:  
  void show_info() { cout << "I am child's method" << endl;}  

  void say_hello() { cout << "Hello from child" << endl;}
};


int main() {
  /*here it will call parent's method from child's object because it is not overridden*/
  Parent *parent = new Child();
  parent->show_info();

  /* But this will be overridden by the child because this method is defined as virtual in parent class*/ 
  parent->say_hello();

  delete parent;

  return 0;
}