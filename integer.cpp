// This program will print the size of int, long int
// by using sizeof() and also print max and min size of an int

#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "size of maximum int is " << INT_MAX << endl;
    cout << "size of minimum int is " << INT_MIN << endl;
    cout << "size of int is " << sizeof(int) << endl;
    cout << "size of long long int is " << sizeof(long long int);
    return 0;
}
