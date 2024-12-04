#include <iostream>
using namespace std;

/* When a class is derived from two or more base classes, it is called multiple inheritance*/

class Teacher {

public:
  string subject;
  float salary;  

};

class Student {

public:
  int roll_no;

};

class TA : public Teacher, public Student {
public: 
  TA(string subject,float salary,int roll_no) 
    : Teacher(subject , salary) : Student(roll_no);    

  void display_data() {
    
  }  
}

int main() {
  TA t1("Rahul",500000,56789);

  return 0;
}