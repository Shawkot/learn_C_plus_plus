// This program will compute and show the nth fibonacci number of the series

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

/*int fibonacci_naive(int n) {  // Naive algorithm, using recursion
    if (n <= 1)
        return n;
    else{
    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
    }
}*/
int fibonacci_fast(int n) {  // Fast algorithm
    int i;
    int num[n];
    num[0] = 0;
    num[1] = 1;
    for(i=2; i <= n; i++){
        num[i] = num[i-1] + num[i-2];
    }
     return num[n];
}
/*void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}*/

int main()
{
   int n;
    cin >> n;
    //cout << fibonacci_naive(n) << endl;
    //test_solution();
    cout << fibonacci_fast(n) << '\n';
    return 0;
}
