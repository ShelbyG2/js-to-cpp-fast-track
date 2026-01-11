#include <iostream>
using namespace std;

// Demonstrates a switch statement by mapping a number (1-7) to a weekday.
void run_case() {
  cout << "---\nSwitch case example (day of week)\n----\n";
  cout << "Enter a number (1-7): ";

  int day{};
  if (!(cin >> day)) {
    cout << "Invalid input!\n";
    return;
  }

  switch (day) {
  case 1:
    cout << "Monday\n";
    break;
  case 2:
    cout << "Tuesday\n";
    break;
  case 3:
    cout << "Wednesday\n";
    break;
  case 4:
    cout << "Thursday\n";
    break;
  case 5:
    cout << "Friday\n";
    break;
  case 6:
    cout << "Saturday\n";
    break;
  case 7:
    cout << "Sunday\n";
    break;
  default:
    cout << "Unknown day. Please enter 1-7.\n";
    break;
  }
}