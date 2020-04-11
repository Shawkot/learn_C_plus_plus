// This program illustrates the various form of float types and 
// also some output formatting by using 'fixed', 'setprecision'

#include <iostream>
#include <iomanip>

using namespace std;
int main(void)
{
    float fvalue= 86.5;
    cout << fvalue << endl;
    cout << fixed << fvalue << endl; // fixed is used for printing fixed amoount of digits in the output
    cout << setprecision(15) << fvalue << endl; // setprecision is used for setting the no. of digits to be outputed
    cout << "size of double: "<< sizeof(double) << endl;
    double dvalue = 76.5;
    cout << dvalue << endl;
    return 0;
}
