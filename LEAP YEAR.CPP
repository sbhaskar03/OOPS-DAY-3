#include <iostream>
using namespace std;

int main() {

  int year;

  cout << "Enter a year: ";
  cin >> year;

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        cout << year << " is a leap year.";
        cout<<"The next leap year is:"<<year+4;
      }
      else {
        cout << year << " is not a leap year.";
        if 
        
      }
    }
    else {
      cout << year << " is a leap year.\n";
      cout<<"The next leap year is:"<<year+4;
    }
  }
  else {
    cout << year << " is not a leap year.";
  }

  return 0;
}
