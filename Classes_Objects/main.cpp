#include <iostream>
using namespace std;

// Making a class
class Teacher {

//Private members
private:
  int salary = 2500;

//Public members
public:
  string name;
  string department;

  void change_dept(string new_dept) { department = new_dept; }

  int get_salary() {
     return salary;
  }
};

int main() {
  // Making a class
  Teacher t1;

  // Initializing attributes
  t1.name = "Rohan";
  t1.department = "BSCS";

  // Printing the property/attribute
  cout << t1.name << endl;

  t1.change_dept("BBA");

  //Now department is changed to BBA
  cout << t1.department << endl;

  return 0;
}