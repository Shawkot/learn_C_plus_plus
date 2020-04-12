// This program will ask the number from user and 
// print the corresponding multiplication table

#include<iostream>
using namespace std;

int main()
{
    int mulTable;
    int i;
    cout << "Enter the number of multiplication table > "<< flush;
    cin >> mulTable;
    for(i=1; i<11; i++){
        cout << mulTable << "x" << i << "="<< mulTable*i <<endl;
    }
    return 0;
}

