// This program will call a function and return a value to main function

#include <iostream>
using namespace std;
int sum(void);

int main(void)
{
    int total = sum();
    cout << "Sum of two number is: "<< total << endl;
    return 0;
}
int sum(void){
    int a, b;
    int sum = 0;
    cout << "inputs 1st integer: "<< flush;
    cin >> a;
    cout << "input 2nd integer:" << flush;
    cin >> b;
    sum = a+b;
    return sum;
}
