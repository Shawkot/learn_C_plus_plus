/* This program will use constructor and destructor in a class

// main.cpp
#include <iostream>
#include "dog.h"

using namespace std;

int main()
{
    cout << "starting program... "<< endl;

    {
    Dog bob;
    bob.speak();
    }
    cout << "closing program... "<< endl;
    return 0;
}

// dog.h
#ifndef cat_h_
#define cat_h_
class Dog
{
private:
    bool happy;
public:
    void speak();
    Dog();
    ~Dog();
};
#endif // cat_h_

// dog.cpp
#include <iostream>
#include "dog.h"

using namespace std;
Dog::Dog()
{
    cout << "creating object" << endl;
    happy = true;
}
Dog::~Dog()
{
    cout << "destroying object" << endl;
}

void Dog::speak()
{
    if(happy){
    cout << "vou vou" << endl;
    }
    else{
        cout << "ghhhhhhh" << endl;
    }
}
