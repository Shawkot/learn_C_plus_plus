// This program will take input of n numbers and 
// give the maximum pairwise product of those numbers

#include <iostream>
#include <vector>

using namespace std;
long long MaxPairwiseProductFast(const vector<int>&numbers)
{
    int i, j;
    int n = numbers.size();

    int max_index1 = -1;
    for(int i=0; i<n; ++i)
        if((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
            max_index1 = i;
    int max_index2 = -1;
    for(j=0; j<n; ++j)
        if((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
            max_index2 = j;
    return ((long long)(numbers[max_index1])) * numbers[max_index2];
}
int main() {
int n;
cin >> n;
vector<int> numbers(n);
for (int i = 0; i < n; ++i) {
cin >> numbers[i];
}
  long long product = MaxPairwiseProductFast(numbers);
cout << product << "\n";
return 0;
}
