// This program will swap two values

#include <iostream>
using namespace std;

void swap(int* value1, int* value2);

int main(void)
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
}
void swap(int* value1, int* value2)
{
    int temp = 0;
    temp = *value1;
    *value1 = *value2;
    *value2 = temp;
    cout << "a = " << *value1 << endl;
    cout << "b = " << *value2 << endl;
}
