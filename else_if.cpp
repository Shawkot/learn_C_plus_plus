// This program will compare a list of menu with the 
// user input by using else-if ladder

#include <iostream>
using namespace std;

int main(){
    cout << "1. Add new record." << endl;
    cout << "2. Deleting record." << endl;
    cout << "3. Searching record." << endl;
    cout << "4. Viewing record." << endl;
    cout << "5. Quiting application." << endl;

    int value;
    cout << "Enter your option >" << flush;
    cin >> value;

    if(value == 1){
        cout << "Adding >" << endl;
    }
    else if(value == 2){
        cout << "Deleting.." << endl;
    }
    else if(value == 3){
        cout << "Searching.." << endl;
    }
    else if(value == 4){
        cout << "Viewing.." << endl;
    }
    else if(value == 5){
        cout << "Quitting.." << endl;
    }
    else{
        cout << "Invalid option" << endl;
    }
    return 0;
}
