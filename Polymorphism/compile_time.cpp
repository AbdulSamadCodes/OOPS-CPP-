#include <iostream>
using namespace std;

/* Compile time polymorphism is the type of polymorphism
  in the function or method that gets called is determined at runtime*/

class Student {
public:
  string name;
  int age;  

  //constructor overloading
  Student() { cout << "I am default constructor" << endl ;} 

  Student(string name , int age) {
    this->name = name;
    this->age = age;
  }

};

class Print {
public:
   //method overloading 

   //there are 4 show methods but because there signature is different 

   void show(int num) {cout << num << endl;} 

   void show(char chr) {cout << chr << endl;} 

   void show(string str) {cout << str << endl;} 
};

class Complex {
public:
  int real , imaginary;

  Complex(int real,int imaginary) : real(real) , imaginary(imaginary) {};

  //operator overloading

  /* Here, we overload the + operator for Complex class */
  Complex operator+(Complex const &obj) {
    return Complex(real + obj.real, imaginary + obj.imaginary);
  }

  void display() {
    cout << real << " + i" << imaginary << endl;
  }
};

int main() {
  //here non-parameterized constructor is called
  // Student sd;

  //here parameterized constructor is called
  Student sd("Samad",20);
  
  Print printer;  

  printer.show(78);
  printer.show('a');
  printer.show("String");

  Complex c1(5,6);
  Complex c2(13,8);

  Complex c3 = c1 + c2;

  c3.display();

  return 0;
}