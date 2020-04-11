// This program will take input from user and output those value

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter your name:" << flush; //Flush is used for clearing the memory buffer and for no new line.
    string name;
    cin >> name;
    cout << "you entered: " << name <<endl;

    cout << "enter a number:" << flush;
    int value;
    cin >> value;
    cout << "you entered:" << value << endl;

    return 0;
}
