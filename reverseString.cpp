// This program will reverse a string

#include <iostream>
using namespace std;

int main()
{
    char text[] = "Shawkot Hossain Riaz";
    int nchar = sizeof(text)-1;
    char *pStart = text;
    char *pEnd =(text + nchar-1);

    while(pEnd >= pStart){
        cout << *pEnd << flush;
        pEnd--;
    }
}
