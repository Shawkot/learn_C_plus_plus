// This program will find gcd (greatest common divisor)
// of two numbers

#include <iostream>
using namespace std;

int gcd_naiveFast(int a, int b)
{
    if(b != 0){
        int c = a%b;
        return gcd_naiveFast(b,c); // Recursive call
    }
    else{
        return a;
    }
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << gcd_naiveFast(a, b) << endl;
  return 0;
}

