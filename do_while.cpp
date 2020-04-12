// This program will infinitely asked password from user
// untill it finds the correct password by using do-while loop

#include <iostream>
using namespace std;

int main(void)
{
    const string password = "hello";
    string input;
    do{
    cout << "enter your password > " << flush;
    cin >> input;
    if(input != password){
        cout << "Access Denied " << endl;
    }
    }while(input != password);

    cout << "password accepted "<< endl;
    return 0;
}
