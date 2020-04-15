#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string name = "shawkot";
    int age = 25;
    stringstream ss;
    ss << "Name is:";
    ss << name;
    ss << "; Age is:";
    ss << age;
    string info = ss.str();
    cout << info << endl;
    return 0;
}
