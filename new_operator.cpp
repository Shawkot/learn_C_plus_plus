// THis program will show the use of 'new' and associate 'delete' operator
// 'new' is used to allocate a memory for an object and 'delete' is used to 
// freeing up those memory

#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
public:
    Animal(){cout << "object created" << endl;}
    Animal(const Animal& other):
        name(other.name) {cout << "copy constructor called" << endl;}
    ~Animal(){cout << "Destructor called" << endl;}
    void setName(string name)
    {
        this->name = name;
    }
    void display()
    {
        cout << "My name is " << name << endl;
    }
};

int main()
{
    Animal *pCat = new Animal;
    pCat->setName("freddy");
    pCat->display();
    delete pCat;
    return 0;
}
