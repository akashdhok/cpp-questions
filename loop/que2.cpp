#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool f = true;

  cout << "Enter a positive integer: ";
  cin >> n;
  // loop to check if n is prime
  for (i = 2; i <= n/2;) {
    if (n % i == 0) {
      f = false;
      break;
    }
     ++i;
  }

  if (f)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}
