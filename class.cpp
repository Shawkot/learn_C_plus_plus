/* This program will create a class named 'Cat' and by using the object (cat, bob) 
of the class, access the method of the class. This program also
illustrates that, a private variable can't be accesed directly from outside of the class */

#include <iostream>

using namespace std;

class Cat //Class declaration
{
private:
    bool happy;

public:
    void makeHappy();
    void makeSad();
    void speak();
    void jump();
};

void Cat::speak() //cat.cpp file
{
    if(happy){
    cout << "meow" <<endl;
    }
    else {
        cout << "hisssss" <<endl;
    }
}

void Cat::makeHappy()
{
    happy = true;

}
void Cat::makeSad()
{
    happy = false;
}

int main() // main function
{
    Cat cat;
    cat.makeHappy();
    cat.speak();

    Cat bob;
    bob.makeSad();
    bob.speak();

    return 0;
}
