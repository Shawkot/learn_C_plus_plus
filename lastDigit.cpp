// This program will show the last digit of a large fibonacci number

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int fibonacci_fast(int n) {
    int i;
    int num[n];
    num[0] = 0;
    num[1] = 1;
    for(i=2; i <= n; i++){
        num[i] = (num[i-1] + num[i-2]) % 10;
    }
     return num[n];
}
int main()
{
   int n;
    cin >> n;
    //cout << fibonacci_naive(n) << endl;
    //test_solution();
    cout << fibonacci_fast(n) << '\n';
    return 0;
}

