#include <iostream>
using namespace std;

class Incrementor {
public:
  /* static member inside a class is shared by all the instances of that class*/
  static int count;

  void increment() {
    count++;

    cout << "Value of count is " << count << endl;
  }
};

class ABC {
public:
  ABC() { cout << "Constructor called" << endl; }

  ~ABC() { cout << "Destructor called" << endl; }      
};

/* static keyword when used inside a function 
   are created & initialized once for the lifetime
   of the program */ 
void increment()  {
  static int counter = 0;
  counter++;


  cout << "Value of counter is " << counter << endl;
}  

//Initializing a clas static member
int Incrementor::count = 0;

int main() {
  // static variable with functions

  increment();
  increment();

  // static variable with classes
  Incrementor counter_1;
  counter_1.increment();

  /* both objects are accessing the same static count variable*/

  Incrementor counter_2;
  counter_2.increment();

  // static objects //

  /* Static object exists for the lifetime of program and goes out of memory 
    only when the whole program is executed */
  if(true) {
    static ABC obj1;
  }

  cout << "Program ending" << endl;
  
  return 0;
}

