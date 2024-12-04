#include <iostream>
using namespace std;  

// Destructor is used to deallocate the memory allocated to an object.It is called by default but it only works for statically allocated memory, we should define our own destructor for dynamically allocated memory

class Book {
private:
  int *total_pages;     
  double *price;

public:
  //initialization list
  Book(int total_pages,double price) 
      : total_pages(new int(total_pages)), price(new double(price)) {}

  void print_data() {
    cout << "This book has " << *(total_pages) << " pages and price is " 
        << *(price) << endl; 
  }

  ~Book() {
    /* Necessary to call the destructor to delete the
       dynamically allocated memory */

    delete total_pages;
    delete price;
  }
};

int main() {
  Book GodFather(567,3200.23);

  GodFather.print_data();

  return 0;
}