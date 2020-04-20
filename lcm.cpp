// This program will find lcm (least common multiple) of two numbers

#include <iostream>
using namespace std;

/*long long lcm_naive(int a, int b) {
  for (long c = 1; c <= (long long) a * b; ++c)
    if (c % a == 0 && c % b == 0)
      return c;

  return (long long) a * b;
}*/
int gcd_naiveFast(int a, int b)
{
    if(b != 0){
        int c = a%b;
        return gcd_naiveFast(b,c);
    }
    else{
        return a;
    }
}


int main() {
  int a, b, g1;
  long long lcm;
  cin >> a >> b;
  g1 = gcd_naiveFast(a, b);
  lcm = ((long long)a*b / g1);
  cout << lcm << endl;
  //cout << lcm_naive(a, b) << std::endl;
  return 0;
}

