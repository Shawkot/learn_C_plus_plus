// This program will construct and array and by using this array
// it will display the 12th table

#include <iostream>
using namespace std;

int main()
{
    int value[10];
    int i;
    for(i=1; i<11; i++){ // Constructing the array and assigning value to it
        value[i] = i;
    }
    for(i=1; i<11; i++){ // Displaying the 12th table by using previous array
    cout << 12*value[i] << " " << flush;
    }
    return 0;
}
