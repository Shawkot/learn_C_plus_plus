// This program utilize if condition to match password

#include <iostream>
using namespace std;

int main()
{
    string password = "letmein";
    cout << "Enter your password >" << flush;
    string userPass;
    cin >> userPass;

    if(password == userPass){
        cout << "password accepted!!" << endl;
    }
    if(password != userPass){
        cout << "Access Denied !!" << endl;
    }
    return 0;
}
