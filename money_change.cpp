// This program will take input an amount of money and
// gives the no. of coins of 1, 5 and 10

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = n/10;
    //cout << "No. of ten's coins: " << result << endl;
    int remainder = n % 10;
    //cout << remainder << endl;
    int result2 = remainder/5;
    //cout << "No. of five's coins: " << result2 << endl;
    int remainder2 = remainder % 5;
    //cout << remainder2 << endl;
    int result3 = remainder2/1;
    //cout << "No. of one's coins: " << result3 << endl;
    cout << (result + result2 + result3) << endl;
}
