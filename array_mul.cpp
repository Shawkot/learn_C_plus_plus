// This program will create a table of fruits by using 
// multidimentional array

#include <iostream>
using namespace std;

int main(void)
{
    int i, j;
    string names[2][3] = {
        {"banana", "apple", "mango"},
        {"jackfruit", "pineapple", "lichi"}
        };
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            cout << names[i][j] << " " << flush;
        }
    cout << endl;
    }
    return 0;


}
