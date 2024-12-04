#include <iostream>
using namespace std;

/* Inheritance is when properties & member functions of base class
   are passed to the derived class */

/* Q:Make a Person class & a teacher class & perform inheritance between them */

class Person {
public:
  string name;
  int age;

  Person(string name , int age) : name(name), age(age) {}  
};

class Teacher : public Person {
private:
  double salary;

public:
  //inheritance with parameterized constructor
  Teacher(string name , int age , double salary) : Person(name , age) {};

  void display_data() {
    cout << name << "'s age is " << age << 
        " and salary is " << salary << endl;;
  }
};

int main() {
  Teacher Eman("Eman" , 20 , 460000); 
  Eman.display_data();

  return 0;
}