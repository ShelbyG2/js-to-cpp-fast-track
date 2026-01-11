#include <iostream>
using namespace std;

void run_if_else() {
  int x = 10;
  cout << "If else example checking whether a number is positive, negative or "
          "equal to zero  \n ";

  if (x > 0) {
    cout << "The number is positive \n";
  } else if (x < 0) {
    cout << "The number is negative";
  } else {
    cout << "The number is zero";
  }
}