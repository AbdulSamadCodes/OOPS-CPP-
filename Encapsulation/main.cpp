#include <iostream>
using namespace std;

// Encapsulation : Encapsulation is wrapping up of data properties & member functions in a single class and making the data private from the end user.

// Q:Create a class called Bank account and encapsulate user'sinformation.

class BankAccount {
  //Making a private member
  private:
    double account_savings = 3400000.456;

  public:
    double get_accsavings() {
      return account_savings;
    }
};


int main() {
  // Encapsulation

  BankAccount account;
  cout << account.get_accsavings() << endl;

  return 0;
}
