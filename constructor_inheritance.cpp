// This program illustrates the constructor inheritance.
// Literally constructor can not be inherited. Any sub-class(derived) can call it's
// super-class constructor. Super-class's (Base-class) private instance can't be accessed directly
// by any sub-class. Lastly, any sub-class can't call the indirect super-class. It should call it's
// super-class.i.e hierarchy must be maintained in constructor calling.

#include <iostream>
using namespace std;

class Machine
{
private:
    int id;
public:
    Machine(): id(0){} //{cout << "Machine no-argument constructor called." << endl;}
    Machine(int id): id(id) {}//{cout << "Machine parameterized constructor called." << endl;}
    void info(){cout << "ID: "<< id << endl;}

};
class Vehicle: public Machine
{
public:
    Vehicle() {}//{cout << "Vehicle no-argument constructor called." << endl;}
    Vehicle(int id): Machine(id){} //{cout << "Vehicle parameterized constructor called." << endl;}

};
class Car: public Vehicle
{
public:
    Car(): Vehicle(55){} //{cout << "Car no-argument constructor called." << endl;}

};
int main()
{
    Machine machine(123);
    machine.info();
    Vehicle vehicle(99);
    vehicle.info();
    Car car;
    car.info();


}
