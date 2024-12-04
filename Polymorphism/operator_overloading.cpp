#include <iostream>
using namespace std;

/* Q:  Implement a class Counter that overloads the ++ operator(prefix & postfix) to 
  increment a private integer data member*/

class Counter {
private:
  int num;  

public:
  Counter(int initial_value) : num(initial_value) {};

  Counter& operator++() {
    ++num;
    return *this;  
  }

  Counter operator++(int) {
    Counter temp = *this;
    ++num;
    return temp;
  } 

  void display() const {cout << num << endl ;}
};

int main() {
  Counter c(20);
  c++;
  
  c.display();

  return 0;
}