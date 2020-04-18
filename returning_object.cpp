// This program will create a function and 
// returned objec from that function

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
Animal *createAnimal()
    {
        Animal *pCat = new Animal();
        pCat->setName("Bobby");
        return pCat;
    }

int main()
{
    Animal *pFrog = createAnimal();
    pFrog->display();
    delete pFrog;
    return 0;
}

