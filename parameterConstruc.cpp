// This program will show how to take parameters in constructor

#include <iostream>
#include <sstream>
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person() {name="unnamed"; age = 0;}
    Person(string name, int age){this->name = name; this->age = age;}
    string toString()
    {stringstream ss;
        ss << name;
        ss << age;
        cout << "My name is "<< name << "; age:"<< age <<endl;
        return ss.str();
        }
};
int main()
{
    Person person1;
    Person person2("riaz", 25);
    person1.toString();
    person2.toString();
}
