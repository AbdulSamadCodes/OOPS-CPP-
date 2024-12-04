#include <iostream>
using namespace std;  

// Constructors

class Person {
private:
  string name;
  int age;

public:
  //Pointer to a class member
  int *marks = new int();

  // Non-parameterized constructor
  Person() { cout << "I am non-paramaeterized constructor" << endl; }

  // Parameterized constructor
  Person(string name, int age , int marks) {
    this->name = name;
    this->age = age;
    *(this->marks) = marks;
  }

  // Custom Copy Cosntructor
  Person(Person &other) {
    this->name = "Huzaifa";
    this->age = other.age;

    //Making a shallow copy
    // this->marks = other.marks; 

    //Making a deep copy
    this->marks = new int();
    *(this->marks) = *(other.marks);
  }

  void display() {
    cout << "Name is " << this->name << ", age is " << this->age << 
            " and marks are " << *(this->marks)<< endl;
  }
};

int main() {
  Person p1("Samad" , 20 , 89);
  // p1.display();

  //Copy constructor is called by default as well as we can define our own
  Person p2(p1);
  // p2.display();

  //When working with pointers/heap memory, we should be carefull about memory allocation as values can get overriden  

  //we change the marks of p1 object
  *(p1.marks) = 78;

  p1.display();

  //marks of object p2 will get overriden, but if we use deep copy then it will not happen
  p2.display();

  

  return 0;
}