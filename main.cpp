#include <iostream>
using namespace std;

// Making a class
// class Teacher {

// //Private members
// private:
//   int salary = 2500;

// //Public members
// public:
//   string name;
//   string department;

//   void change_dept(string new_dept) { department = new_dept; }

//   int get_salary() {
//      return salary;
//   }
// };

// Encapsulation : Encapsulation is wrapping up of data properties & member
// functions in a single class

// Q:Create a class called Bank account and encapsulate user'sinformation.

// class BankAccount {
//   //Making a private member

//   private:
//     double account_savings = 3400000.456;

//   public:
//     double get_accsavings() {
//       return account_savings;
//     }
// };

// Constructors

class Person {
private:
  string name;
  int age;

public:
  // Non-parameterized constructor
  Person() { cout << "I am non-paramaeterized constructor" << endl; }

  // Parameterized constructor
  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }

  // Custom Copy Cosntructor
  Person(Person &other) {
    this->name = "Huzaifa";
    this->age = other.age;
  }

  void display() {
    cout << "Name is: " << this->name << " " << this->age << endl;
  }
};

int main() {
  // // Making a class
  // Teacher t1;

  // // Initializing attributes
  // t1.name = "Rohan";
  // t1.department = "BSCS";

  // // Printing the property/attribute
  // cout << t1.name << endl;

  // t1.change_dept("BBA");

  // //Now department is changed to BBA
  // cout << t1.department << endl;

  // //Accessing the private member salary by a public method
  // cout << t1.get_salary() << endl;

  // Encapsulation

  // BankAccount account;
  // cout << account.get_accsavings() << endl;

  // Making an object and passing the values to constructor
  Person p1("Samad", 20);
  // p1.display();

  // Copy constructor is called by default
  Person p2(p1);

  p2.display();
  return 0;
}