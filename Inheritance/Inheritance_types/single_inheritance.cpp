#include <iostream>
using namespace std;

/* When a base class is derived by a single class, it is single inheritance*/

class Car {
public:  
  double *price;  
  int seats;

  Car(double price , int seats) : 
     price(new double(price)), seats(seats) {};     

 ~Car() { 
   delete price;
  }    
};  

class SportsCar : public Car {
public:
  SportsCar(double price , int seats) : Car(price,seats) {};  

  void display_price() {
    cout << *(price) << endl;
  }

  void show_pointer_address() {
    cout << price << endl;
  }    
};

int main( ) {
  SportsCar scar(56789.345,4);

  scar.display_price();
  scar.show_pointer_address();

  return 0;
}