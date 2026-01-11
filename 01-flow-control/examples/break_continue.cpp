#include <iostream>
using namespace std;

// Demonstrates break and continue inside a loop.
void run_break_continue() {
  cout << "--- Break & Continue Example ---\n";
  cout << "Printing numbers 1..10, skipping evens (continue), stopping at 7 "
          "(break)\n";

  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      continue; // skip even numbers
    }

    cout << i << ' ';

    if (i == 7) {
      break; // stop the loop completely
    }
  }

  cout << "\nDone.\n";
}