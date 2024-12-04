  #include <iostream>
  using namespace std;

  class Person {
  public:
    string name;
    int age;

    Person(string name , int age) {
      this->name = name;
      this->age = age;
    }   
  };

  class Student : public Person {
  public:
    int roll_no;

    Student(string name , int age , int roll_no) : Person(name , age) {
      this->roll_no = roll_no;
    }
  };
  
  class GradStudent : public Student {
  public:
    string research_field;

    GradStudent(string name, int age, int roll_no , string research_field) 
        : Student(name , age , roll_no) {
        this->research_field = research_field;  
    };         
  };

  int main() {
    GradStudent Samad("Samad",25,64906,"CS");
    cout << Samad.name << endl;

    return 0;
  }