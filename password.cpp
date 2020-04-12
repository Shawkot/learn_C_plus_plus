// This program will ask password from user for 3 times
// If get wrong password for 3 times, it will show 'time exceeded', but whenever get a valid password
// the program will immediately terminated

#include <iostream>
using namespace std;

int main(void)
{
    int n=0;
    const string password = "hello";
    string input;
    while(n < 3){
        cout << "enter your password > "<< flush;
        cin >> input;
        if(input != password){
            cout << "Invalid Password" << endl;
        }
        else {
            cout << "password accepted" << endl;
            goto valid;
        }
        n++;
    }
    cout << "time exceeded" << endl;
    return 0;
    valid:
        cout << "welcome to our site!!" << endl;
}
