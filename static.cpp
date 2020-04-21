// This program illustrates 'static variable' and 
// 'static member funcion', their usage and initialization

#include <iostream>
using namespace std;

class Person
{
private:
    int id;
    static int count; // Static variable
public:
    //person(){}
    static int const MAX = 99;
    static void showinfo() //Static member function
    {
        cout << "Present value of count: "<<count << endl;
    }
    int getId() {
        id = ++count;
        cout << "Object ID: " << id << endl;}
};
int Person::count = 0; // Static variable initialization

int main()
{
    Person person1;
    person1.getId();
    Person person2;
    person2.getId();
    Person person3;
    person3.getId();
    Person::showinfo();
    cout << Person::MAX << endl;

}
