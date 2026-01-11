#include <iostream>
using namespace std;

// Prints a right-triangle asterisk pattern using nested for-loops.
// Outer loop = rows, inner loop = number of '*' in that row.
void run_for() {
  cout << "---For loop---\n";
  for (int i = 1; i <= 5; i++) {
    cout << i << ". ";
    for (int j = 1; j <= i; j++) {
      cout << '*';
    }
    cout << "\n";
  }
}

// Demonstrates a while-loop: keeps running while the condition is true.
void run_while() {
  cout << "---While loop---\n";
  int j = 0;
  while (j <= 6) {
    cout << j++ << ".\n";
  }
}

// Demonstrates a do-while loop: runs the body at least once,then checks the
// condition.
void run_do_while() {
  cout << "Do-while loop\n";
  int k = 0;
  do {
    cout << k++ << ".\n";
  } while (k < 7);
}

// Menu to choose which loop example to run.
void run_loops() {
  cout << "---\nLoops examples\n--- \n 1.For loop\n 2.While loop\n 3.Do-while "
          "loop\n Enter an option(1-3): ";

  int option;
  cin >> option;
  if (!option) {
    cout << "Invalid option!";
    return;
  }

  if (option == 1) {
    run_for();
    return;
  } else if (option == 2) {
    run_while();
    return;
  } else if (option == 3) {
    run_do_while();
    return;
  } else {
    cout << "Invalid option";
  }
}