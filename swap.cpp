// This program will swap two values

#include <iostream>
using namespace std;

void swap(int* value1, int* value2);

int main(void)
{
    int a;
    int b;
    cout << "input the 1st value:" << flush;
    cin >> a;
    cout << "input the 2nd value:" << flush;
    cin >> b;
    swap(&a, &b);
}
void swap(int* value1, int* value2)
{
    int temp = 0;
    temp = *value1;
    *value1 = *value2;
    *value2 = temp;
    cout << "1st value: " << *value1 << endl;
    cout << "2nd value: " << *value2 << endl;
}

