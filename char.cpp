// This program illustrate the type casting and character output

#include <iostream>
using namespace std;

int main(void)
{
    bool bvalue = true;
    cout << bvalue << endl;
    cout << "size of bool: " << sizeof(bool) << endl;

    char cvalue = 55;
    cout << cvalue << endl; // Here the output will show the charcarter 7
                            // because character 7 is equvalent to number 55 in decimal
    char cvalue1 = 't';
    cout << (int)cvalue1 << endl;// (int)cvalue1 does the type casting

    wchar_t wvalue = 'i'; // wchar_t is used for holding greater number of charter
    cout << wvalue << endl;
    cout << "size of wchar_t: " << sizeof(wchar_t) << endl;
    return 0;

}


