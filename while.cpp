// This program will infinitely asked password from user
// untill it finds the correct password by using while loop

#include <iostream>
using namespace std;

int main(void)
{
    const string password = "hello";
    cout << "Enter your password >" << flush;
    string input;
    cin >> input;
    while(input != password){
        cout << "password incorrect" << endl;
        cout << "Enter your password again >" << flush;
        cin >> input;
    }
    cout << "correct password" << endl;
    return 0;
    }
